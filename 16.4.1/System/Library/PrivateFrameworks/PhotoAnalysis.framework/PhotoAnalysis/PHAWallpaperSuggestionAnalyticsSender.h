@class PGWallpaperLibraryAnalysisSummary, PGManagerWorkingContext, PHPhotoLibrary, NSObject, CPAnalytics;
@protocol OS_os_log;

@interface PHAWallpaperSuggestionAnalyticsSender : NSObject {
    PGManagerWorkingContext *_workingContext;
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_os_log> *_loggingConnection;
    CPAnalytics *_analytics;
    PGWallpaperLibraryAnalysisSummary *_libraryAnalysisSummary;
}

+ (id)analyticsPayloadForLibraryAnalysisSummary:(id)a0;
+ (struct { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; })suggestionStatisticsFromSuggestions:(id)a0;

- (void).cxx_destruct;
- (long long)shufflePickerVisiblePeopleCount;
- (long long)eligiblePetsCount;
- (id)existingSuggestionSummary;
- (id)generationSummaryWithGeneratedWallpaperSuggestionLocalIdentifiers:(id)a0;
- (id)initWithGraphManager:(id)a0 libraryAnalysisSummary:(id)a1;
- (id)peoplePetSummary;
- (void)sendGenerationSummaryEventWithGeneratedWallpaperSuggestionLocalIdentifiers:(id)a0;
- (void)sendRefreshSummaryEventWithPosterConfiguration:(id)a0;

@end

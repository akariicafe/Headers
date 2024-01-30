@class MiroAutoEditProjectPolish, Project, MiroRandomNumberGenerator, MovieController, MiroMemory, NSString, MiroAutoEdit_TrimController, NSMapTable, MiroAutoEditLogger;

@interface MiroAutoEditController : NSObject <MiroAutoEditDelegate>

@property (retain, nonatomic) MiroAutoEdit_TrimController *trimController;
@property (retain, nonatomic) MiroAutoEditProjectPolish *polisher;
@property (retain, nonatomic) NSMapTable *trimRangeForClipMap;
@property (retain, nonatomic) MiroAutoEditLogger *logger;
@property (retain, nonatomic) Project *project;
@property (retain, nonatomic) MiroMemory *activeMemory;
@property (nonatomic) BOOL shouldBuildMovieController;
@property (retain, nonatomic) MovieController *movieController;
@property (nonatomic) struct CGSize { double width; double height; } naturalSize;
@property (retain, nonatomic) MiroRandomNumberGenerator *kenBurnsRandomNumberGenerator;
@property (nonatomic) BOOL shouldSkipPolish;
@property (readonly, nonatomic) BOOL titleIsSupported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localImageRequestOptions;

- (void).cxx_destruct;
- (id)_fetchStoreItemForMediaID:(unsigned long long)a0;
- (id)_makePolisher;
- (void)_finishPolisher;
- (void)autoEditToDuration:(int)a0;
- (void)applyAutomaticThemeTitleToFirstClip;
- (void)_incrementCountForKey:(id)a0 inDictionary:(id)a1;
- (id)candidateAssetsForSaliencyAnalysis;
- (void)_removeSpeedRampFromEndOfClip:(id)a0;
- (void)_removeSpeedRampFromBeginningOfClip:(id)a0;
- (id)candidateAssetsForAutoCropAnalysis;
- (void)runRealTimeSaliencyModels;

@end

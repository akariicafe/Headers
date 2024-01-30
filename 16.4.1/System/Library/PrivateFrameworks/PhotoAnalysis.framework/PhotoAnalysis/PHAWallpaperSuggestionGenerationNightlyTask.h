@class NSDictionary, NSString;

@interface PHAWallpaperSuggestionGenerationNightlyTask : NSObject <PHASuggestionGenerationTask>

@property (retain, nonatomic) NSDictionary *suggestionOptionsDictionary;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lastGalleryAppearanceDateWithError:(id *)a0;
+ (BOOL)shouldRefreshGalleryWithLoggingConnection:(id)a0;

@end

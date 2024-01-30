@class NSURL, ATXBiomeSuggestedHomePageStream;

@interface ATXHomeScreenFocusSuggestionLogger : NSObject

@property (retain, nonatomic) ATXBiomeSuggestedHomePageStream *stream;
@property (retain, nonatomic) NSURL *suggestedHomePageStreamBookmarkURLPath;

- (id)init;
- (void).cxx_destruct;
- (id)generateSuggestedHomePageStreamBookmark;
- (id)generateSuggestedHomePageStreamBookmarkURLPath;
- (void)logHomeScreenFocusSuggestionMetrics;
- (void)writeBookmarkToFile:(id)a0;

@end

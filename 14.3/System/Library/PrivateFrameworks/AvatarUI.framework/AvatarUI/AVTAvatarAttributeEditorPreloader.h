@class AVTPresetResourceLoader, NSMutableDictionary;
@protocol AVTUILogger;

@interface AVTAvatarAttributeEditorPreloader : NSObject

@property (retain, nonatomic) AVTPresetResourceLoader *resourceLoader;
@property (retain, nonatomic) NSMutableDictionary *cancelationTokens;
@property (retain, nonatomic) id<AVTUILogger> logger;

- (void).cxx_destruct;
- (void)cancelAllPreloading;
- (id)initWithResourceLoader:(id)a0 logger:(id)a1;
- (void)preloadSectionItem:(id)a0 atIndexPath:(id)a1;
- (void)cancelPreloadForSectionItemIndexPath:(id)a0;
- (void)preloadCategory:(id)a0;
- (void)dealloc;

@end

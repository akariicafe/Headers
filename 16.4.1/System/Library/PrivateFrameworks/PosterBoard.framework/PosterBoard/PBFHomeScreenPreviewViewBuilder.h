@class UIScreen, PRPosterHomeScreenConfiguration, UIImage;

@interface PBFHomeScreenPreviewViewBuilder : NSObject

@property (retain, nonatomic) UIScreen *screen;
@property (retain, nonatomic) PRPosterHomeScreenConfiguration *homeScreenConfiguration;
@property (retain, nonatomic) UIImage *unlockedPosterSnapshot;
@property (nonatomic) BOOL excludesSilhouette;
@property (nonatomic) BOOL excludesHomeScreenDock;
@property (nonatomic) double viewScreenSizeScale;
@property (copy, nonatomic) id /* block */ renderingCompletionHandler;

- (id)init;
- (void).cxx_destruct;
- (id)buildView;

@end

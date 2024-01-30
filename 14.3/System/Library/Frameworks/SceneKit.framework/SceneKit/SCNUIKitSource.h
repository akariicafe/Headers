@class CALayer;

@interface SCNUIKitSource : SCNImageSource {
    CALayer *_uiWindowLayer;
    BOOL _isOpaque;
    BOOL _windowPreparing;
}

@property (retain, nonatomic) id uiView;
@property (retain, nonatomic) id uiWindow;

- (BOOL)isOpaque;
- (id)init;
- (void)dealloc;
- (id)textureSource;
- (BOOL)supportsMetal;
- (id)prepareWindowIfNeeded;

@end

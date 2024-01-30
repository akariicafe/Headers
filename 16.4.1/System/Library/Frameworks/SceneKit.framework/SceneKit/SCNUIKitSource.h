@class CALayer;

@interface SCNUIKitSource : SCNImageSource {
    CALayer *_uiWindowLayer;
    BOOL _isOpaque;
    BOOL _windowPreparing;
}

@property (retain, nonatomic) id uiView;
@property (retain, nonatomic) id uiWindow;

- (BOOL)isOpaque;
- (void)dealloc;
- (id)init;
- (id)prepareWindowIfNeeded;
- (BOOL)supportsMetal;
- (id)textureSource;

@end

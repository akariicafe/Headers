@class UIResponder, NSArray;

@interface MagnifierSupport.MagnifierCommandManager : UIResponder {
    void /* unknown type, empty encoding */ nextResponderResolver;
    void /* unknown type, empty encoding */ allKeyCommands;
}

@property (nonatomic, readonly) UIResponder *nextResponder;
@property (nonatomic, readonly) NSArray *keyCommands;

- (void).cxx_destruct;
- (id)init;
- (void)toggleFlashlight:(id)a0;
- (void)toggleFocus:(id)a0;
- (void)decreaseZoom:(id)a0;
- (void)increaseZoom:(id)a0;
- (void)decreaseBrightness:(id)a0;
- (void)increaseBrightness:(id)a0;
- (void)decreaseContrast:(id)a0;
- (void)increaseContrast:(id)a0;
- (void)previousFilter:(id)a0;
- (void)nextFilter:(id)a0;

@end

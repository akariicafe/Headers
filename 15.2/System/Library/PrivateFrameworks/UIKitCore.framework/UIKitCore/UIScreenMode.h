@class FBSDisplayMode;

@interface UIScreenMode : NSObject {
    FBSDisplayMode *_mode;
}

@property (getter=_isMainScreen, setter=_setMainScreen:) BOOL _mainScreen;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) double pixelAspectRatio;

+ (id)_screenModeForDisplayMode:(id)a0 mainScreen:(BOOL)a1;

- (struct CGSize { double x0; double x1; })_sizeWithLevel:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_displayMode;
- (id)initWithDisplayMode:(id)a0 mainScreen:(BOOL)a1;

@end

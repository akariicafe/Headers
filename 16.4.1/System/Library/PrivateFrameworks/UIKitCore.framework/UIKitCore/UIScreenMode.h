@class FBSDisplayMode;

@interface UIScreenMode : NSObject {
    FBSDisplayMode *_mode;
    BOOL _isMainScreen;
    double _scale;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) double pixelAspectRatio;

+ (id)_screenModeForDisplayMode:(id)a0 mainScreen:(BOOL)a1 actualDisplayScale:(double)a2;

- (id)_displayMode;
- (id)valueForKey:(id)a0;
- (struct CGSize { double x0; double x1; })_sizeWithLevel:(unsigned long long)a0;
- (id)initWithDisplayMode:(id)a0 mainScreen:(BOOL)a1 actualDisplayScale:(double)a2;
- (id)description;
- (void).cxx_destruct;

@end

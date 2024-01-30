@interface ABPKCropParams : NSObject

@property unsigned int offsetHeight;
@property unsigned int offsetWidth;
@property unsigned int height;
@property unsigned int width;

- (id)initWithAspectRatio:(float)a0 andInputResolution:(struct CGSize { double x0; double x1; })a1;
- (id)initWithInputResolution:(struct CGSize { double x0; double x1; })a0 andOutputResolution:(struct CGSize { double x0; double x1; })a1;

@end

@interface TSDSwatchRenderingResult : NSObject

@property (readonly, nonatomic) struct CGImage { } *foreground;
@property (readonly, nonatomic) struct CGImage { } *background;

+ (id)renderingResultWithForeground:(struct CGImage { } *)a0 background:(struct CGImage { } *)a1;

- (void)dealloc;

@end

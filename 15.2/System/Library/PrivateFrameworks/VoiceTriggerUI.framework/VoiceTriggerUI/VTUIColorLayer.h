@class UIColor;

@interface VTUIColorLayer : CAShapeLayer {
    UIColor *_redColor;
    UIColor *_blueColor;
    UIColor *_backgroundColor;
}

@property float phase;

+ (BOOL)needsDisplayForKey:(id)a0;

- (id)actionForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)display;

@end

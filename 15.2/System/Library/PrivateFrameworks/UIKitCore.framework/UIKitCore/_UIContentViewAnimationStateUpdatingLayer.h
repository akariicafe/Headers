@interface _UIContentViewAnimationStateUpdatingLayer : CALayer {
    id /* block */ _progressHandler;
}

@property (nonatomic) double progress;

+ (id)layerForView:(id)a0 withUpdateHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
+ (BOOL)needsDisplayForKey:(id)a0;

- (void)drawInContext:(struct CGContext { } *)a0;
- (id)initWithLayer:(id)a0;
- (void).cxx_destruct;
- (void)animationCompletedWithPosition:(long long)a0;

@end

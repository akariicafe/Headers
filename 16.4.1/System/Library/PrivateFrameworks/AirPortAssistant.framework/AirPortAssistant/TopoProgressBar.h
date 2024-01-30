@interface TopoProgressBar : CALayer {
    id _owningView;
}

@property (nonatomic) id owningView;
@property (nonatomic) float progressValue;

+ (void)deallocImageCache;
+ (int)initImageCache;

- (void)dealloc;
- (void)layoutSublayers;
- (struct CGSize { double x0; double x1; })preferredFrameSize;
- (id)initWithOwningView:(id)a0;
- (struct CGImage { } *)composeProgressBar;

@end

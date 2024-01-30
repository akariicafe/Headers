@interface TopoProgressBar : CALayer {
    id _owningView;
}

@property (nonatomic) id owningView;
@property (nonatomic) float progressValue;

+ (int)initImageCache;
+ (void)deallocImageCache;

- (void)layoutSublayers;
- (id)initWithOwningView:(id)a0;
- (struct CGSize { double x0; double x1; })preferredFrameSize;
- (void)dealloc;
- (struct CGImage { } *)composeProgressBar;

@end

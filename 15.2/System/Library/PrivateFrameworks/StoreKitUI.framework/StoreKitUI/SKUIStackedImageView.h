@class NSString, MPUBorderConfiguration, MPUStackView, MPUBorderDrawingCache, UIView;

@interface SKUIStackedImageView : SKUIImageView <MPUStackViewDataSource> {
    MPUBorderConfiguration *_borderConfiguration;
    long long _stackDepth;
    MPUStackView *_stackView;
}

@property (retain, nonatomic) MPUBorderDrawingCache *borderDrawingCache;
@property (weak, nonatomic) UIView *perspectiveTargetView;
@property (nonatomic) struct CGPoint { double x0; double x1; } vanishingPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)maximumPerspectiveHeightForSize:(struct CGSize { double x0; double x1; })a0;
+ (struct SKUIStackedImageConfiguration { struct UIOffset { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; long long x2; })_configurationForSize:(struct CGSize { double x0; double x1; })a0;

- (void)layoutSubviews;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)dealloc;
- (void)setImage:(id)a0;
- (void)updateForChangedDistanceFromVanishingPoint;
- (long long)numberOfItemsInStackView:(id)a0;
- (void)stackView:(id)a0 didCreateItem:(id)a1;
- (void)stackView:(id)a0 applyAttributesToItem:(id)a1 atIndex:(long long)a2;
- (void)performCompressionAnimationWithCompletionHandler:(id /* block */)a0;

@end

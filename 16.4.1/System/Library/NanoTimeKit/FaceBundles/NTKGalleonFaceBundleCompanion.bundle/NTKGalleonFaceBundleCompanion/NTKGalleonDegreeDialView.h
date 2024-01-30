@class NSString, UIImageView, NTKGalleonRasterizableProgressView;

@interface NTKGalleonDegreeDialView : UIView <NTKGalleonHeadingSettable, NTKGalleonProgressSettable, NTKGalleonNightModeSupporting> {
    NTKGalleonRasterizableProgressView *_labelView;
    NTKGalleonRasterizableProgressView *_labelTickView;
    NTKGalleonRasterizableProgressView *_majorTickView;
    NTKGalleonRasterizableProgressView *_minorTickView;
    UIImageView *_chevronView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_newChevronImageView;
+ (id)_newLabelView;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)init;
- (void).cxx_destruct;
- (void)galleon_setHeading:(double)a0;
- (void)galleon_setPalette:(id)a0;
- (void)galleon_setProgress:(double)a0;
- (void)setChevronAndLabelOpacity:(double)a0;

@end

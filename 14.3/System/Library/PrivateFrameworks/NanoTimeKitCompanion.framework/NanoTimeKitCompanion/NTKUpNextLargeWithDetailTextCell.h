@class NTKUpNextImageView, NSString, UILayoutGuide, NTKColoringLabel;

@interface NTKUpNextLargeWithDetailTextCell : NTKUpNextBaseCell <CLKMonochromeFilterProvider> {
    UILayoutGuide *_contentLayoutGuide;
    NTKUpNextImageView *_bodyImage;
    NTKColoringLabel *_headerLabel;
    NTKColoringLabel *_bodyLabel;
    NTKColoringLabel *_detail1Label;
    NTKColoringLabel *_detail2Label;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPaused:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (void)configureWithContent:(id)a0;
- (id)filterForView:(id)a0 style:(long long)a1;
- (id)filterForView:(id)a0 style:(long long)a1 fraction:(double)a2;
- (id)colorForView:(id)a0 accented:(BOOL)a1;

@end

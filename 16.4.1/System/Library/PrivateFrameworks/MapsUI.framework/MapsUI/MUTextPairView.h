@class MUTextPairViewModel, NSString, NSArray, UILabel;

@interface MUTextPairView : UIView <MUStackable> {
    UILabel *_leftLabel;
    UILabel *_rightLabel;
    NSArray *_constraints;
}

@property (retain, nonatomic) MUTextPairViewModel *viewModel;
@property (nonatomic, getter=isStacked) BOOL stacked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (BOOL)shouldStackForProposedWidth:(double)a0;

@end

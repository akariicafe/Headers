@class CAMLevelViewModel, NSString, CAMLevelCrosshair;

@interface CAMLevelIndicatorView : UIView <CAMLevelViewModelChangeObserver>

@property (readonly, nonatomic) CAMLevelCrosshair *_goalCrosshair;
@property (readonly, nonatomic) CAMLevelCrosshair *_userCrosshair;
@property (readonly, nonatomic) CAMLevelViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)observable:(id)a0 didPublishChange:(unsigned long long)a1 withContext:(void *)a2;
- (void)_commonCAMLevelIndicatorViewInitializationWithViewModel:(id)a0;
- (void)_updateCrosshairAlphasWithAlpha:(double)a0 indicatorMode:(long long)a1;
- (void)_updateCrosshairHighlightWithOffset:(struct UIOffset { double x0; double x1; })a0;

@end

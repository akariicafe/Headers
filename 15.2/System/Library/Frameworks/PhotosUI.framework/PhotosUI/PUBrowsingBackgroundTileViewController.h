@class UIColor, UIVisualEffect, UIVisualEffectView, PUBrowsingViewModel, NSString, _UIContentUnavailableView;

@interface PUBrowsingBackgroundTileViewController : PUTileViewController <PUBrowsingViewModelChangeObserver>

@property (nonatomic, setter=_setNeedsUpdateColor:) BOOL _needsUpdateColor;
@property (copy, nonatomic, setter=_setNextColorUpdateAnimatorBlock:) id /* block */ _nextColorUpdateAnimatorBlock;
@property (retain, nonatomic, setter=_setEmptyPlaceholderView:) _UIContentUnavailableView *_emptyPlaceholderView;
@property (nonatomic, setter=_setEmptyPlaceholderFrame:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _emptyPlaceholderFrame;
@property (retain, nonatomic, setter=_setBackgroundBlurView:) UIVisualEffectView *_backgroundBlurView;
@property (retain, nonatomic) UIColor *backgroundColorOverride;
@property (retain, nonatomic) UIVisualEffect *visualEffect;
@property (nonatomic) BOOL shouldDisplayEmptyPlaceholder;
@property (retain, nonatomic) PUBrowsingViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)applyLayoutInfo:(id)a0;
- (void)_invalidateColorWithAnimatorBlock:(id /* block */)a0;
- (void)viewDidLoad;
- (void)_updateColorIfNeeded;
- (void)_updateBackgroundBlurViewAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (void)_invalidateColor;
- (id)initWithReuseIdentifier:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_emptyPlaceholderFrameForLayoutInfo:(id)a0;
- (void)_updateEmptyPlaceholderAnimated:(BOOL)a0;

@end

@class UITapGestureRecognizer, NSString, SBFluidSwitcherIconImageContainerView, NSArray, UILabel, SBMedusaSettings, SBFluidSwitcherSpaceTitleItem;
@protocol SBFluidSwitcherItemContainerFooterViewDelegate;

@interface SBFluidSwitcherItemContainerFooterView : UIView <PTSettingsKeyObserver> {
    SBFluidSwitcherIconImageContainerView *_firstIconView;
    UILabel *_firstLabel;
    SBFluidSwitcherIconImageContainerView *_secondIconView;
    UILabel *_secondLabel;
    SBFluidSwitcherSpaceTitleItem *_firstItem;
    SBFluidSwitcherSpaceTitleItem *_secondItem;
    NSArray *_titleItems;
    UITapGestureRecognizer *_tapGestureRecognizer;
    SBMedusaSettings *_settings;
}

@property (class, readonly, nonatomic) double iconViewHeight;

@property (readonly, weak, nonatomic) id<SBFluidSwitcherItemContainerFooterViewDelegate> delegate;
@property (nonatomic) double textAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)layoutSubviews;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (void)_handleTapGestureRecognizer:(id)a0;
- (void)_updateLabels;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (void).cxx_destruct;
- (void)setTitleItems:(id)a0 animated:(BOOL)a1;
- (void)dealloc;
- (id)_makeIconView;
- (id)_makeLabel;
- (id)_attributedTextFromText:(id)a0;

@end

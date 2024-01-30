@class UIView, NSString, _UILegibilitySettings, WGNewWidgetsButton, UIFont, NSMutableDictionary, UIButton, MTMaterialView, WGShortLookStyleButton;
@protocol WGWidgetListFooterViewDelegate;

@interface WGWidgetListFooterView : UIView <UITextViewDelegate, MTMaterialGrouping> {
    NSMutableDictionary *_widgetIDsToAttributionViews;
    UIFont *_referenceFont;
    MTMaterialView *_customizeButtonBackground;
}

@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) long long layoutMode;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) BOOL shouldBlurContent;
@property (nonatomic) BOOL shouldSizeContent;
@property (retain, nonatomic) WGShortLookStyleButton *editButton;
@property (retain, nonatomic) UIButton *customizeButton;
@property (weak, nonatomic) id<WGWidgetListFooterViewDelegate> delegate;
@property (retain, nonatomic) WGNewWidgetsButton *widgetAvailableButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *materialGroupNameBase;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)textView:(id)a0 shouldInteractWithTextAttachment:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldBlurContent;
- (void)_setAttributedString:(id)a0 forWidgetIdentifier:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_referenceFont;
- (void)invalidateSubviewGeometery;
- (void)_availableWidgetsUpdated:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_addCustomizeButton;
- (void)_updateForContentCategorySizeDidChange;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)setVisibleWidgetsIDs:(id)a0;
- (void)setShouldBlurContent:(BOOL)a0;

@end

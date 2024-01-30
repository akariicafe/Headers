@class UIColor, NSString, UILabel, UIFont, UIView, MFModernAtomIconView, MFModernAtomBackgroundView, UIActivityIndicatorView;

@interface MFModernAtomView : UIDefaultKeyboardInput <MFModernAtomViewResembling> {
    UIColor *_effectiveTintColor;
    unsigned long long _disabledPresentationOptions;
    UIView *_baselineView;
    MFModernAtomBackgroundView *_background;
    UIView *_compositingView;
    UIView *_titleLabelFillView;
    BOOL _wrappingSupported;
    BOOL _cachedIsWrappingEnabled;
}

@property (readonly, nonatomic) MFModernAtomBackgroundView *backgroundView;
@property (readonly, nonatomic) MFModernAtomIconView *badgeIconView;
@property (readonly, nonatomic) MFModernAtomIconView *accessoryIconView;
@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly, nonatomic) unsigned long long effectivePresentationOptions;
@property (readonly, nonatomic) UIColor *effectiveTintColor;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } selectionFrame;
@property (nonatomic) double firstLineIndent;
@property (nonatomic) BOOL isPrimaryAddressAtom;
@property (nonatomic) BOOL hidesVIPIndicator;
@property (nonatomic) BOOL separatorHidden;
@property (nonatomic) BOOL separatorIsLeftAligned;
@property (nonatomic) double scale;
@property (nonatomic) int separatorStyle;
@property (nonatomic) unsigned long long presentationOptions;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } baselinePoint;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } edgeInsets;
@property (retain, nonatomic) UIFont *titleFont;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaultHeight;
+ (id)_defaultTintColor;
+ (double)horizontalPadding;
+ (id)defaultFont;
+ (id)primaryAtomFont;
+ (id)_SMSTintColor;
+ (id)_badgeImagesForPresentationOptions:(unsigned long long)a0 iconOrder:(const unsigned long long *)a1 orderingLength:(unsigned long long)a2 tintColor:(id)a3 large:(BOOL)a4 variant:(int)a5;
+ (id)_defaultLabelAttributesWithFont:(id)a0 wrappingEnabled:(BOOL)a1;
+ (id)_defaultLabelAttributesWithWrappingEnabled:(BOOL)a0;
+ (id)_failureTintColor;
+ (struct CGPoint { double x0; double x1; })defaultBaselinePoint;
+ (BOOL)presentationOptions:(unsigned long long *)a0 encodedIntoAddress:(id)a1;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)viewForLastBaselineLayout;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (double)preferredWidth;
- (void).cxx_destruct;
- (void)_updateLabelAttributes;
- (double)_leftInset;
- (double)_rightInset;
- (void)_updateActivityIndicator;
- (void)_updateCompositingFilters;
- (void)_setPresentationOption:(unsigned long long)a0 enabled:(BOOL)a1;
- (id)_centeredTextAttachmentWithImage:(id)a0;
- (id)_chevronTextAttachment;
- (void)_invalidatePresentationOptions;
- (double)_leftPadding;
- (int)_preferredIconVariant;
- (double)_rightPadding;
- (void)_setEffectiveTintColor:(id)a0;
- (void)_updateFontIfNecessary;
- (void)_updateIconViewsSemanticContentAttribute;
- (void)_updateSubviewsForWrapping;
- (void)appendPresentationOption:(unsigned long long)a0;
- (void)clearPresentationOption:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 presentationOptions:(unsigned long long)a1 separatorStyle:(int)a2 wrappingSupported:(BOOL)a3;
- (BOOL)isWrappingEnabled;
- (void)performBuildInAnimationFromTextColor:(id)a0 withDuration:(double)a1;
- (double)preferredWidthWithSizeConstraints:(struct CGSize { double x0; double x1; })a0;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1 style:(unsigned long long)a2;

@end

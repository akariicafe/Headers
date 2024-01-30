@class TLKMultilineText;

@interface TLKTextView : UITextView

@property (nonatomic) unsigned long long prominence;
@property (retain, nonatomic) TLKMultilineText *multilineText;
@property (nonatomic) BOOL automaticUrlification;

- (void)tlk_updateForAppearance:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void)updateAttributedString;
- (BOOL)_usesNonVibrantAppearance;
- (void).cxx_destruct;
- (void)urlify;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)didMoveToWindow;
- (double)effectiveBaselineOffsetFromBottom;
- (double)effectiveFirstBaselineOffsetFromTop;
- (void)setText:(id)a0;

@end

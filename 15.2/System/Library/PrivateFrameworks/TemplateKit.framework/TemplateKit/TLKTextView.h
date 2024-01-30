@class TLKMultilineText;

@interface TLKTextView : UITextView

@property (nonatomic) unsigned long long prominence;
@property (retain, nonatomic) TLKMultilineText *multilineText;
@property (nonatomic) BOOL automaticUrlification;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)urlify;
- (void)tlk_updateForAppearance:(id)a0;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (double)effectiveBaselineOffsetFromBottom;
- (double)effectiveFirstBaselineOffsetFromTop;
- (void)didMoveToWindow;
- (void)updateAttributedString;
- (BOOL)_usesNonVibrantAppearance;

@end

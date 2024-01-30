@class UIFont, TLKMultilineText, UILabel, TLKRichText, TLKFormattedText;

@interface TLKLabel : UILabel

@property (retain, nonatomic) UILabel *overlayLabelForNonColoredGlyphs;
@property (retain) UIFont *originalFont;
@property BOOL hasCustomTextColor;
@property BOOL attributedTextExplicitelySet;
@property BOOL attributedTextUpdateDisabled;
@property BOOL attributedTextUpdateSkipped;
@property unsigned long long adjustedProminence;
@property (nonatomic) unsigned long long prominence;
@property (retain, nonatomic) TLKMultilineText *multilineText;
@property (retain, nonatomic) TLKRichText *richText;
@property (retain, nonatomic) TLKFormattedText *formattedText;
@property (nonatomic) BOOL supportsColorGlyphs;

+ (id)primaryLabel;
+ (id)genericLabel;
+ (id)tertiaryLabel;
+ (id)secondaryLabel;

- (void)performBatchUpdates:(id /* block */)a0;
- (void)setNumberOfLines:(long long)a0;
- (void)setAttributedText:(id)a0;
- (void)setLineBreakMode:(long long)a0;
- (void)tlk_updateForAppearance:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithProminence:(unsigned long long)a0;
- (void)setTextColor:(id)a0;
- (void)setFont:(id)a0;
- (void)setTextAlignment:(long long)a0;
- (void)setFont:(id)a0 keepOriginal:(BOOL)a1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)didMoveToWindow;
- (void)updateAttributedText;
- (void)layoutSubviews;
- (void)updateWithAttributedString:(id)a0;
- (void)updateWithString:(id)a0;
- (void)updateAdjustedProminence;
- (void)setText:(id)a0;
- (BOOL)hasEmphasizedFormattingInRichText;

@end

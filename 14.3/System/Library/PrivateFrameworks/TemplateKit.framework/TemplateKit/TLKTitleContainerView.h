@class TLKRichTextField, TLKLabel, TLKImageView;

@interface TLKTitleContainerView : TLKStackView

@property (retain, nonatomic) TLKRichTextField *titleField;
@property (retain, nonatomic) TLKLabel *secondaryLabel;
@property (retain, nonatomic) TLKImageView *secondaryImageView;

+ (BOOL)hasNonBoldFormattingInRichText:(id)a0;

- (id)titleFont;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (id)init;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)updateResultWithTitle:(id)a0 secondaryTitle:(id)a1 image:(id)a2 detached:(BOOL)a3 useCompactMode:(BOOL)a4 truncateMiddle:(BOOL)a5;
- (id)titleLabelString;
- (id)secondaryTitleLabelString;

@end

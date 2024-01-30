@class UIColor, NSString, UIFont, UILabel, NSAttributedString;

@interface MKVibrantLabel : MKVibrantView {
    UILabel *_label;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long textAlignment;
@property (nonatomic, setter=_setHyphenationFactor:) float _hyphenationFactor;
@property (nonatomic) BOOL allowsDefaultTighteningForTruncation;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly, nonatomic) double idealWidth;
@property (nonatomic) long long lineBreakMode;

- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;

@end

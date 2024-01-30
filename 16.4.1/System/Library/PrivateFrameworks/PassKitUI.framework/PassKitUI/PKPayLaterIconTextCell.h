@class UIColor, NSString, UIFont, PKTitleDetailValueTextView;

@interface PKPayLaterIconTextCell : PKPayLaterIconCell {
    PKTitleDetailValueTextView *_view;
}

@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *secondaryText;
@property (copy, nonatomic) NSString *tertiaryText;
@property (copy, nonatomic) NSString *amountText;
@property (nonatomic) unsigned long long accessory;
@property (retain, nonatomic) UIColor *primaryTextColor;
@property (retain, nonatomic) UIColor *secondaryTextColor;
@property (retain, nonatomic) UIColor *tertiaryTextColor;
@property (retain, nonatomic) UIColor *amountTextColor;
@property (retain, nonatomic) UIFont *primaryFont;
@property (retain, nonatomic) UIFont *secondaryFont;
@property (retain, nonatomic) UIFont *tertiaryFont;
@property (retain, nonatomic) UIFont *amountFont;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)_createViewIfNecessary;

@end

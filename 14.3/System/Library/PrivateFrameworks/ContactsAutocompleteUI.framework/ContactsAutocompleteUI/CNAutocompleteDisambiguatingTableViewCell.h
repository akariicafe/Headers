@class UIImageView, UIView;

@interface CNAutocompleteDisambiguatingTableViewCell : CNComposeTableViewCell

@property (retain) UIImageView *checkmarkImageView;
@property (nonatomic, getter=isCheckmarkVisible) BOOL checkmarkVisible;
@property (readonly) UIView *checkmarkView;

+ (id)createCheckmarkView;
+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)setRecipient:(id)a0;
- (BOOL)canCollapseRecipient;
- (id)titleTextStyle;

@end

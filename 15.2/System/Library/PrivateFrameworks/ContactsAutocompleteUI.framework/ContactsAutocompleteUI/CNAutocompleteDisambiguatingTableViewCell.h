@class UIImageView, UIView;

@interface CNAutocompleteDisambiguatingTableViewCell : CNComposeTableViewCell

@property (retain) UIImageView *checkmarkImageView;
@property (nonatomic, getter=isCheckmarkVisible) BOOL checkmarkVisible;
@property (readonly) UIView *checkmarkView;

+ (id)identifier;
+ (id)createCheckmarkView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setRecipient:(id)a0;
- (void).cxx_destruct;
- (id)titleTextStyle;
- (BOOL)canCollapseRecipient;

@end

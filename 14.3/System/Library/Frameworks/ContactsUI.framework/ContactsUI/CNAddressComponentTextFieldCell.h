@class NSArray, UIImageView, UITextField, NSDictionary;

@interface CNAddressComponentTextFieldCell : NUITableViewContainerCell

@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UIImageView *chevron;
@property (readonly, nonatomic) NSArray *textFields;
@property (nonatomic) BOOL showsChevron;
@property (copy, nonatomic) NSDictionary *textAttributes;

+ (id)cellIdentifier;
+ (Class)containerViewClass;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setupTextFields;
- (id)newTextField;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)updateMargins;

@end

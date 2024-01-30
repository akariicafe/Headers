@class NSString;

@interface HRTextContentViewController : HKViewController

@property (copy, nonatomic) NSString *string;

- (id)textView;
- (id)initWithString:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (id)_attributedStringFromString:(id)a0;

@end

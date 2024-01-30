@class NSString;

@interface HRTextContentViewController : HKViewController

@property (copy, nonatomic) NSString *string;

- (id)textView;
- (id)initWithString:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)_attributedStringFromString:(id)a0;

@end

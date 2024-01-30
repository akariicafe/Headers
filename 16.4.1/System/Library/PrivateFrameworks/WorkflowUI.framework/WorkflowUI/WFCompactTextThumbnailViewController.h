@class NSString, UITextView;

@interface WFCompactTextThumbnailViewController : WFCompactThumbnailViewController

@property (readonly, nonatomic) NSString *string;
@property (weak, nonatomic) UITextView *textView;

- (id)initWithString:(id)a0;
- (unsigned long long)preferredContentMode;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (double)contentHeightForWidth:(double)a0;

@end

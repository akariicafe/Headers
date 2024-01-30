@class NSString, NSArray, UIImage;

@interface BPSAboutDetailViewController : OBTextWelcomeController

@property (copy, nonatomic) id /* block */ onDismiss;
@property (retain, nonatomic) NSString *headerString;
@property (retain, nonatomic) NSString *footerString;
@property (retain, nonatomic) NSArray *bullets;
@property (retain, nonatomic) NSArray *paragraphs;
@property (retain, nonatomic) NSString *titleString;
@property (retain, nonatomic) UIImage *headerGlyph;

- (id)init;
- (void).cxx_destruct;
- (void)donePressed;
- (void)viewDidLoad;
- (void)presentWithController:(id)a0 onDismiss:(id /* block */)a1;
- (BOOL)contentViewIsInAdjustedScrollView;
- (void)presentWithController:(id)a0;

@end

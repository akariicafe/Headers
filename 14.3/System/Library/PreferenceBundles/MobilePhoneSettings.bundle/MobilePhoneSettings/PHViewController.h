@class NSString, UIView;
@protocol PHContentUnavailable;

@interface PHViewController : UIViewController

@property (nonatomic) long long whitePointAdaptivityStyle;
@property (nonatomic) BOOL contentUnavailable;
@property (retain, nonatomic) UIView<PHContentUnavailable> *contentUnavailableView;
@property (copy, nonatomic) NSString *contentUnavailableViewTitle;

- (long long)preferredWhitePointAdaptivityStyle;
- (id)init;
- (void).cxx_destruct;
- (void)commonInit;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)didReceiveMemoryWarning;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setContentUnavailable:(BOOL)a0 animated:(BOOL)a1;
- (void)makeUIForDefaultPNG;

@end

@class NSString, UIView;
@protocol PHContentUnavailable;

@interface PHViewController : UIViewController

@property (nonatomic) long long whitePointAdaptivityStyle;
@property (nonatomic) BOOL contentUnavailable;
@property (retain, nonatomic) UIView<PHContentUnavailable> *contentUnavailableView;
@property (copy, nonatomic) NSString *contentUnavailableViewTitle;

- (long long)preferredWhitePointAdaptivityStyle;
- (void)didReceiveMemoryWarning;
- (void)commonInit;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setContentUnavailable:(BOOL)a0 animated:(BOOL)a1;
- (void)makeUIForDefaultPNG;

@end

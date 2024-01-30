@class NSArray, PRXIconContentView, NSString;

@interface PRXIconContentViewController : PRXCardContentViewController

@property (readonly, nonatomic) PRXIconContentView *contentView;
@property (nonatomic) long long imageStyle;
@property (copy, nonatomic) NSArray *images;
@property (copy, nonatomic) NSString *bodyText;

+ (Class)contentViewClass;

- (id)initWithContentView:(id)a0;
- (void)viewDidLoad;
- (void)_updateImageViews;
- (void).cxx_destruct;
- (void)_updateBodyLabel;

@end

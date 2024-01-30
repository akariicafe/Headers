@class CLPlacemark;

@interface WFCompactMapThumbnailViewController : WFCompactThumbnailViewController

@property (readonly, nonatomic) CLPlacemark *placemark;

- (void)loadView;
- (void).cxx_destruct;
- (double)contentHeightForWidth:(double)a0;
- (id)initWithCLPlacemark:(id)a0;

@end

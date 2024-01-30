@class CLPlacemark;

@interface WFCompactMapThumbnailViewController : WFCompactThumbnailViewController

@property (readonly, nonatomic) CLPlacemark *placemark;

- (void).cxx_destruct;
- (void)loadView;
- (double)contentHeightForWidth:(double)a0;
- (id)initWithCLPlacemark:(id)a0;

@end

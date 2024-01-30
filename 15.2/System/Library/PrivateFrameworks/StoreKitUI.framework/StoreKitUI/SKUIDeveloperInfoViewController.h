@class UIScrollView, SKUIDeveloperInfo, SKUIDeveloperInfoView;

@interface SKUIDeveloperInfoViewController : SKUIViewController {
    SKUIDeveloperInfoView *_infoView;
    UIScrollView *_scrollView;
}

@property (readonly, nonatomic) SKUIDeveloperInfo *developerInfo;

- (void)loadView;
- (void).cxx_destruct;
- (id)initWithDeveloperInfo:(id)a0;

@end

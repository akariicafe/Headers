@class UIScrollView, SKUIDeveloperInfo, SKUIDeveloperInfoView;

@interface SKUIDeveloperInfoViewController : SKUIViewController {
    SKUIDeveloperInfoView *_infoView;
    UIScrollView *_scrollView;
}

@property (readonly, nonatomic) SKUIDeveloperInfo *developerInfo;

- (void).cxx_destruct;
- (void)loadView;
- (id)initWithDeveloperInfo:(id)a0;

@end

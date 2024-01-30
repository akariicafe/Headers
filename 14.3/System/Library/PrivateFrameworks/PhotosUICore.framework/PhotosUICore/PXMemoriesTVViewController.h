@class PXMemoriesUIViewController, PXMemoriesDataSourceManager;

@interface PXMemoriesTVViewController : UIViewController {
    PXMemoriesUIViewController *_memoriesController;
    PXMemoriesDataSourceManager *_dataSourceManager;
}

- (void).cxx_destruct;
- (id)initWithDataSourceManager:(id)a0;
- (void)viewDidLoad;

@end

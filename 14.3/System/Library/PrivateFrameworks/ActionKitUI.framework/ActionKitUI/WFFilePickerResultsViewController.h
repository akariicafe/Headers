@class WFRemoteFileListView, NSArray;
@protocol WFRemoteFileListViewDelegate;

@interface WFFilePickerResultsViewController : UIViewController

@property (readonly, weak, nonatomic) WFRemoteFileListView *fileListView;
@property (copy, nonatomic) NSArray *files;
@property (readonly, weak, nonatomic) id<WFRemoteFileListViewDelegate> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)updateContentInset;
- (void)viewWillLayoutSubviews;
- (id)initWithFileListDelegate:(id)a0;

@end

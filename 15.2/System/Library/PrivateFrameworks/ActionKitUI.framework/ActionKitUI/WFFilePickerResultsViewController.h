@class WFRemoteFileListView, NSArray;
@protocol WFRemoteFileListViewDelegate;

@interface WFFilePickerResultsViewController : UIViewController

@property (readonly, weak, nonatomic) WFRemoteFileListView *fileListView;
@property (copy, nonatomic) NSArray *files;
@property (readonly, weak, nonatomic) id<WFRemoteFileListViewDelegate> delegate;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (void)updateContentInset;
- (void)dealloc;
- (id)initWithFileListDelegate:(id)a0;

@end

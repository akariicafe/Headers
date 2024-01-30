@class UILabel, UIImageView, DEDAttachmentItem;

@interface FBKOpaqueFileViewController : UIViewController

@property (weak, nonatomic) UILabel *debugLabel;
@property (weak, nonatomic) UILabel *fileNameLabel;
@property (weak, nonatomic) UILabel *fileSizeLabel;
@property (weak, nonatomic) UIImageView *icon;
@property (retain, nonatomic) DEDAttachmentItem *item;

+ (BOOL)shouldDisplayItem:(id)a0;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)showShareSheet;
- (void)didTapView;
- (BOOL)showsItem;

@end

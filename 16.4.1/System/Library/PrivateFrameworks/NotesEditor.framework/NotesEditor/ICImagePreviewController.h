@class ICAttachment;

@interface ICImagePreviewController : UIViewController

@property (retain, nonatomic) ICAttachment *attachment;

- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithAttachment:(id)a0;

@end

@protocol CKBrowserDragControllerDelegate;

@interface CKBrowserDragController : UIViewController

@property (nonatomic) id<CKBrowserDragControllerDelegate> delegate;

- (id)initWithView:(id)a0;

@end

@class ICTableAttachmentProvider, NSString, ICTableAttachmentViewController;

@interface ICTableUndoTarget : NSObject <TTTextUndoTarget>

@property (retain, nonatomic) ICTableAttachmentProvider *provider;
@property (weak, nonatomic) ICTableAttachmentViewController *tableAttachmentViewController;
@property (readonly, nonatomic) ICTableAttachmentViewController *tableAttachmentViewControllerForUndo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)applyUndoGroup:(id)a0;
- (id)initWithProvider:(id)a0 viewController:(id)a1;

@end

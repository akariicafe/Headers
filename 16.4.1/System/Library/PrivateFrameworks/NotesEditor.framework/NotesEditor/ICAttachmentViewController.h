@class ICTextAttachment, ICAttachment, NSString;

@interface ICAttachmentViewController : ICAbstractAttachmentViewController <ICAttachmentViewControllerInitializing>

@property (nonatomic) BOOL forManualRendering;
@property (readonly, weak, nonatomic) ICAttachment *attachment;
@property (weak, nonatomic) ICTextAttachment *textAttachment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)loadView;
- (id)initWithTextAttachment:(id)a0 forManualRendering:(BOOL)a1 layoutManager:(id)a2;

@end

@class NSString;
@protocol CNContactViewHostProtocol, CNContactViewControllerPPTDelegate;

@interface CNContactViewServiceErrorViewController : CNErrorViewController <CNContactContentViewController>

@property (weak, nonatomic) id<CNContactViewHostProtocol> delegate;
@property (weak, nonatomic) id<CNContactViewControllerPPTDelegate> pptDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)didChangeToEditMode:(BOOL)a0;
- (void)didChangeToShowTitle:(BOOL)a0;
- (void)editCancel;
- (void)performConfirmedCancel;
- (void)setupWithOptions:(id)a0 readyBlock:(id /* block */)a1;
- (void)toggleEditing;

@end

@class _UIResilientRemoteViewContainerViewController, NSArray, CSAddressingViewModel, NSURL, CKShare, CKContainerSetupInfo, NSString;
@protocol CSAddParticipantsViewControllerDelegate;

@interface CSAddParticipantsViewController : UIViewController <CNContactPickerDelegate, CSAddParticipantsPublicController>

@property (retain, nonatomic) CKShare *share;
@property (retain, nonatomic) NSArray *collaborationOptionsGroups;
@property (retain, nonatomic) CSAddressingViewModel *addressingViewModel;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) CKContainerSetupInfo *containerSetupInfo;
@property (retain, nonatomic) _UIResilientRemoteViewContainerViewController *childViewController;
@property (weak, nonatomic) id<CSAddParticipantsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)contactPicker:(id)a0 didSelectContactProperty:(id)a1;
- (id)initWithCKShare:(id)a0 containerSetupInfo:(id)a1 fileURL:(id)a2 collaborationOptionsGroups:(id)a3 headerImageData:(id)a4 headerTitle:(id)a5 loadingText:(id)a6 supplementaryText:(id)a7 primaryButtonText:(id)a8 secondaryButtonText:(id)a9;
- (void)embedViewController:(id)a0;
- (void)dismissViewControllerWithError:(id)a0 shareURL:(id)a1 ckShare:(id)a2;
- (void)showContactPickerFromSourceRect:(id)a0;

@end

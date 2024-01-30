@class NSString, SUDocumentationData, SUManagerClient;

@interface PSGSoftwareVersionController : PSListController <SUManagerClientDelegate> {
    SUManagerClient *_suClient;
    SUDocumentationData *_osDocumentationData;
    SUDocumentationData *_splatDocumentationData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)specifiers;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)client:(id)a0 rollbackDidFail:(id)a1 withError:(id)a2;
- (void)client:(id)a0 rollbackDidFinish:(id)a1;
- (void)client:(id)a0 rollbackDidStart:(id)a1;
- (void)osLearnMoreTapped;
- (id)osUpdateDetailCellSpecifier;
- (id)osUpdateDetailGroup;
- (id)osUpdateLearnMoreButton;
- (void)presentLearnMoreSheetForDocumentationData:(id)a0;
- (void)releaseNotesDonePressed:(id)a0;
- (void)removeSecurityResponse;
- (void)setPreparingRollback:(BOOL)a0;
- (void)splatLearnMoreTapped;
- (id)splatRollbackButton;
- (id)splatUpdateDetailCellSpecifier;
- (id)splatUpdateDetailGroup;
- (id)splatUpdateLearnMoreButton;

@end

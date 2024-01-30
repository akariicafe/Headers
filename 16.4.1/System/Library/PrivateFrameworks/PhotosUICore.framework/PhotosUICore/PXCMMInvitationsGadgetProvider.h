@class PXCMMInvitationsDataSourceManager, NSString, PXCMMInvitationsDataSource;
@protocol PXCMMWorkflowPresenting;

@interface PXCMMInvitationsGadgetProvider : PXGadgetProvider <PXChangeObserver, PXSectionedDataSourceManagerObserver, PXCMMInvitationGadgetDelegate> {
    PXCMMInvitationsDataSource *_dataSource;
    BOOL _didGenerateGadgets;
}

@property (readonly, nonatomic) PXCMMInvitationsDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) id<PXCMMWorkflowPresenting> workflowPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)generateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (id)init;
- (void).cxx_destruct;
- (id)_newGadgetForObjectID:(id)a0;
- (void)_setDataSource:(id)a0 changes:(id)a1;
- (id)initWithDataSourceManager:(id)a0 workflowPresenter:(id)a1;
- (id)invitationForGadget:(id)a0;

@end

@class PXFeedSectionInfosManager, NSString, NSMutableArray, PXGadgetNavigationHelper;
@protocol PXGadgetTransition, PXGadgetDelegate;

@interface PXSharedAlbumActivityGadgetProvider : PXGadgetProvider <PXFeedSectionInfosManagerDelegate, PXSharedAlbumInvitationGadgetDelegate>

@property (retain, nonatomic) PXFeedSectionInfosManager *feedSectionInfosManager;
@property (nonatomic) unsigned long long estimatedGadgetCount;
@property (retain, nonatomic) NSString *invitationAlbumCloudGUID;
@property (retain, nonatomic) NSMutableArray *delayedChanges;
@property (readonly, nonatomic) long long maxNumberOfSections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<PXGadgetTransition> gadgetTransition;
@property (readonly, nonatomic) PXGadgetNavigationHelper *rootNavigationHelper;
@property (weak, nonatomic) id<PXGadgetDelegate> nextGadgetResponder;

- (void)loadDataForGadgets;
- (void)generateGadgets;
- (void)dealloc;
- (unsigned long long)estimatedNumberOfGadgets;
- (id)init;
- (void)_update:(id)a0;
- (void).cxx_destruct;
- (id)_gadgetsForSectionIndexes:(id)a0;
- (unsigned long long)_indexForGadget:(id)a0;
- (id)_indexesOfSectionInfosToDisplay:(unsigned long long)a0;
- (void)_processDelayedChanges;
- (void)_processDelayedChangesImmediatelyIfNecessary:(id)a0;
- (void)feedSectionInfosManager:(id)a0 sectionInfosDidChange:(id)a1;
- (void)gadget:(id)a0 didAccept:(BOOL)a1;

@end

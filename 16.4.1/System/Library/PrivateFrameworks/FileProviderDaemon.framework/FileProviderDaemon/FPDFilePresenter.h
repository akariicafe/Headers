@class NSData, NSString, NSURL, FPItem, FPItemID, FPDExtensionManager, NSObject, FPDDomain;
@protocol OS_dispatch_queue, FPXEnumerator;

@interface FPDFilePresenter : NSObject <FPXEnumeratorObserver, FPDLifetimeExtender> {
    FPDExtensionManager *_manager;
    id<FPXEnumerator> _enumerator;
    NSObject<OS_dispatch_queue> *_queue;
    NSData *_changeToken;
    FPItem *_currentItem;
    BOOL _isRunning;
    BOOL _isFetchingChanges;
    BOOL _shouldRefetchChanges;
    BOOL _presenterWantsUbiqitousAttributes;
}

@property (retain, nonatomic) FPItemID *itemID;
@property (copy, nonatomic) id filePresenterID;
@property (nonatomic) int presenterPid;
@property (nonatomic) BOOL isEnumeratorActive;
@property (nonatomic) BOOL isFrontmost;
@property (readonly, nonatomic) NSURL *presentedItemURL;
@property (retain, nonatomic) FPDDomain *domain;
@property (readonly, nonatomic) FPItemID *observedItemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) int requestEffectivePID;
@property (readonly) NSString *prettyDescription;
@property (readonly) double timeout;
@property unsigned long long timeoutState;

+ (id)presenter:(id)a0 withItemID:(id)a1 pid:(int)a2 urlHint:(id)a3 domain:(id)a4;

- (id)enumerator;
- (void)_fetchChangeToken;
- (void)dumpStateTo:(id)a0;
- (void)becomeFrontmost:(BOOL)a0 inWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)enumerationResultsDidChange;
- (void)didUpdateItem:(id)a0;
- (void)_fetchUpdates;
- (void)_enumeratorRequestDidFailWithXPCError:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)stop;
- (void)receiveUpdatedItems:(id)a0 deletedItemsIdentifiers:(id)a1;
- (id)_newCoordinator;
- (void)start;
- (id)initWithIdentifier:(id)a0 itemID:(id)a1 pid:(int)a2 urlHint:(id)a3 domain:(id)a4;
- (void).cxx_destruct;
- (void)_destroyEnumerator;
- (id)_presentedItemDescription:(BOOL)a0;

@end

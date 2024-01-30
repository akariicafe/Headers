@class NSString, SGSqlEntityStore;

@interface SGHistoryObserver : NSObject <SGSuggestHistoryObserver> {
    SGSqlEntityStore *_store;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hashesDidChange;
- (void)processNewConfirmOrRejectEventHashes:(id)a0;
- (id)initWithStore:(id)a0;
- (void).cxx_destruct;
- (void)processNewConfirmedOrRejectedReminderHashes:(id)a0;

@end

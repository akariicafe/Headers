@class NSString, CKRecordZone, CKRecordZoneID;

@interface BRCCreateZoneAndSubscribeOperation : _BRCOperation <BRCOperationSubclass> {
    CKRecordZoneID *_zoneID;
}

@property (nonatomic) BOOL subscriptionOnly;
@property (nonatomic) BOOL optimisticSubscribe;
@property (copy, nonatomic) id /* block */ createZoneAndSubscribeCompletionBlock;
@property (readonly, nonatomic) CKRecordZone *createdZone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (BOOL)shouldRetryForError:(id)a0;
- (id)createActivity;
- (id)initWithSession:(id)a0 zoneID:(id)a1;
- (id)initWithServerZone:(id)a0;
- (void)_registerSubscriptionForZoneID:(id)a0 isOptimisticSubscribe:(BOOL)a1;
- (void)_createZoneWithZoneID:(id)a0;

@end

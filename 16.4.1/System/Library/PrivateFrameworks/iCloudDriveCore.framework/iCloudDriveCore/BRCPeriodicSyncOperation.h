@class BRCContainerScheduler, CKServerChangeToken, NSString;

@interface BRCPeriodicSyncOperation : _BRCOperation <BRCOperationSubclass>

@property (readonly, nonatomic) BRCContainerScheduler *scheduler;
@property (readonly, nonatomic) CKServerChangeToken *metadataChangeToken;
@property (readonly, nonatomic) CKServerChangeToken *zoneHealthChangeToken;
@property (readonly, nonatomic) CKServerChangeToken *sideCarChangeToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)main;
- (id)createActivity;
- (BOOL)shouldRetryForError:(id)a0;
- (void).cxx_destruct;
- (id)initWithContainerScheduler:(id)a0 metadataChangeToken:(id)a1 zoneHealthChangeToken:(id)a2 sideCarChangeToken:(id)a3;
- (BOOL)scheduleSyncDownIfNeededForZoneID:(id)a0 zoneIfAny:(id)a1;

@end

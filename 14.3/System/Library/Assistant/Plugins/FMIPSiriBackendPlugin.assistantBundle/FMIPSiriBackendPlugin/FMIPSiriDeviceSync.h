@class _TtC8FMClient7Session, FMIPSyncContent, NSString;

@interface FMIPSiriDeviceSync : NSObject <AFSyncHandler>

@property (retain, nonatomic) FMIPSyncContent *syncContent;
@property (retain, nonatomic) _TtC8FMClient7Session *clientSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)beginSyncWithInfo:(id)a0 configuration:(id)a1;
- (void)getChangeAfterAnchor:(id)a0 changeInfo:(id)a1;
- (void)syncDidEnd;
- (void)invalidateClientSession;
- (void)sync_ValidateSyncCacheWithInfo:(id)a0;
- (id)sync_voiceAssistantSyncWithOutAnchor:(id *)a0;
- (void)validateSyncCacheWithInfo:(id)a0 completion:(id /* block */)a1;

@end

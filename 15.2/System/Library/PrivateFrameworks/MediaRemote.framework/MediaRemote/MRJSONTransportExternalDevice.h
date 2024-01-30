@class NSString;

@interface MRJSONTransportExternalDevice : MRTransportExternalDevice <MRProtocolClientConnectionDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPaired;
- (void)_handleSetStateMessage:(id)a0;
- (id)_onWorkerQueue_createClientConnectionWithTransport:(id)a0;

@end

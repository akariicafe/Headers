@class NSString, DTSysmonTapRecordDecoder;

@interface DTSysmonTapMemoHandlerDelegate : NSObject <DTTapMemoHandlerDelegate> {
    DTSysmonTapRecordDecoder *_recordDecoder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)peekAtMemo:(id)a0;
- (void)sendDataMemo:(id)a0 toBulkReceiver:(id)a1;
- (void)sendDataMemo:(id)a0 toClientUsingConfig:(id)a1;
- (void)sendHeartbeatMemo:(id)a0 toClientUsingConfig:(id)a1;

@end

@class NSString, NFTimer, NSArray;

@interface NFCVASReaderSession : NFCReaderSession <NFReaderSessionCallbacks> {
    NFTimer *_presenceCheckTimer;
    NSArray *_vasConfig;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)readingAvailable;

- (void).cxx_destruct;
- (void)dealloc;
- (void)beginSession;
- (void)didTerminate:(id)a0;
- (void)didDetectTags:(id)a0 connectedTagIndex:(unsigned long long)a1;
- (id)initWithDelegate:(id)a0 sessionDelegateType:(long long)a1 queue:(id)a2 pollMethod:(unsigned long long)a3 sessionConfig:(unsigned long long)a4;
- (void)_callbackDidBecomeActive;
- (id)_convertVASConfigToInternalRequest:(id)a0;
- (id)_sendVASRequests:(id)a0 error:(id *)a1;
- (id)_convertVASResponseToExternal:(id)a0;
- (id)initWithVASCommandConfigurations:(id)a0 delegate:(id)a1 queue:(id)a2;

@end

@class NSMutableArray, NSString, NSDictionary, NSData, NSNumber, SETransceiveHelper;

@interface AlohaPairingController : NSObject {
    NSString *_alohaServerIP;
    BOOL _restoreEnvironment;
}

@property (retain, nonatomic) NSString *alohaHostname;
@property (retain, nonatomic) SETransceiveHelper *transceiver;
@property (nonatomic) BOOL useReverseProxy;
@property (retain, nonatomic) NSDictionary *reverseProxySettings;
@property (retain, nonatomic) NSData *seid;
@property (retain, nonatomic) NSString *fullServerSessionID;
@property (retain, nonatomic) NSString *serverSessionID;
@property (retain, nonatomic) NSNumber *alohaVersion;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSNumber *ecid;
@property (retain, nonatomic) NSNumber *apChipId;
@property (retain, nonatomic) NSString *debugRecordPath;
@property (retain, nonatomic) NSMutableArray *alohaPlistRecord;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)processAuthReqPayload:(id)a0 outError:(id *)a1;
- (id)processApduReqPayload:(id)a0 outError:(id *)a1;
- (id)processEndPair:(id)a0;
- (id)beginPair:(id *)a0;
- (id)getReverseProxySettings:(id)a0 outError:(id *)a1;
- (id)initWithOptions:(const void *)a0 seController:(struct shared_ptr<SEUpdater::P73BaseSEController> { struct P73BaseSEController *x0; struct __shared_weak_count *x1; })a1;
- (int)performAlohaPairing;
- (id)performHTTPRequestWithRequestDict:(id)a0 outError:(id *)a1;
- (BOOL)submitPairingRecord:(id *)a0;
- (id)verifyAndRetrieveServerSessionId:(id)a0;
- (void)writeRecord:(id)a0 fileExtension:(id)a1;

@end

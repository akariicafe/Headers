@class NSData;

@interface ATGrappaSession : NSObject {
    unsigned int _sessionId;
    unsigned long long _sessionType;
    NSData *_sessionResponseData;
    NSData *_sessionRequestData;
}

- (id)deviceInfo;
- (id)initWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)_deviceCreateSignature:(id *)a0 forData:(id)a1;
- (id)_deviceVerifySignature:(id)a0 forData:(id)a1;
- (id)_hostCreateSignature:(id *)a0 forData:(id)a1;
- (id)_hostVerifySignature:(id)a0 forData:(id)a1;
- (id)beginHostSessionWithDeviceResponseData:(id)a0;
- (id)createSignature:(id *)a0 forData:(id)a1;
- (id)establishDeviceSessionWithRequestData:(id)a0 responseData:(id *)a1;
- (id)establishHostSessionWithDeviceInfo:(id)a0 clientRequestData:(id *)a1;
- (id)verifySignature:(id)a0 forData:(id)a1;

@end

@class HAPBTLEResponse, NSString;

@interface HAP2EncodedResponseThread : HAP2LoggingObject <HAP2EncodedResponse>

@property (readonly, nonatomic) HAPBTLEResponse *btleResponse;
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBTLEResponse:(id)a0;

@end

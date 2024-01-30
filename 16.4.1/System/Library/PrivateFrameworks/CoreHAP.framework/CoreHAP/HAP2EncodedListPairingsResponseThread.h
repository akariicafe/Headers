@class NSArray, NSString;

@interface HAP2EncodedListPairingsResponseThread : HAP2EncodedResponseThread <HAP2EncodedListPairingsResponse>

@property (readonly, nonatomic) NSArray *pairings;
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBTLEResponse:(id)a0 pairings:(id)a1;

@end

@class HAPRelayRequestMessage, NSData;

@interface HAPRelayResponseMessage : HMFObject

@property (readonly, nonatomic) HAPRelayRequestMessage *request;
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) long long statusCode;
@property (retain, nonatomic) NSData *body;

- (id)shortDescription;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithRequest:(id)a0 serializedMessage:(id)a1;
- (BOOL)_deserializeResponseMessage:(id)a0;

@end

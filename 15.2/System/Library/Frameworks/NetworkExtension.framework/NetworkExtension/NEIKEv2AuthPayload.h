@class NSData, NEIKEv2AuthenticationProtocol;

@interface NEIKEv2AuthPayload : NEIKEv2Payload

@property (retain, nonatomic) NEIKEv2AuthenticationProtocol *authProtocol;
@property (readonly, nonatomic) unsigned long long method;
@property (retain, nonatomic) NSData *authenticationData;

+ (id)copyTypeDescription;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData;
- (unsigned long long)type;

@end

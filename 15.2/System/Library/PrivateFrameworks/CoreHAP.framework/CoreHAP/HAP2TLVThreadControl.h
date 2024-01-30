@class NSString, HAP2TLVThreadOperationTypeWrapper, HAPTLVUnsignedNumberValue, HAP2TLVThreadNetworkCredentials;

@interface HAP2TLVThreadControl : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAP2TLVThreadOperationTypeWrapper *operationType;
@property (retain, nonatomic) HAP2TLVThreadNetworkCredentials *threadNetworkCredentials;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *formingAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (id)serializeWithError:(id *)a0;
- (id)initWithOperationType:(id)a0 threadNetworkCredentials:(id)a1 formingAllowed:(id)a2;

@end

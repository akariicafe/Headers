@class NSString, HAPTLVUnsignedNumberValue;

@interface HAPNFCAccessSupportedConfiguration : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPTLVUnsignedNumberValue *maximumNumberOfIssuerKeys;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *maximumNumberOfSuspendedDeviceCredentialKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithMaximumNumberOfIssuerKeys:(id)a0 maximumNumberOfSuspendedDeviceCredentialKeys:(id)a1;
- (id)serializeWithError:(id *)a0;

@end

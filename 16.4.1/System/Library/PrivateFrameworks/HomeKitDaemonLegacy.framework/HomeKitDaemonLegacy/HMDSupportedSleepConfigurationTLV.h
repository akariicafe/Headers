@class NSString, NSMutableArray, HAPTLVUnsignedNumberValue;

@interface HMDSupportedSleepConfigurationTLV : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPTLVUnsignedNumberValue *version;
@property (retain, nonatomic) NSMutableArray *supportedWoLPacketConfigurations;
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
- (id)serializeWithError:(id *)a0;
- (id)initWithVersion:(id)a0 supportedWoLPacketConfigurations:(id)a1;

@end

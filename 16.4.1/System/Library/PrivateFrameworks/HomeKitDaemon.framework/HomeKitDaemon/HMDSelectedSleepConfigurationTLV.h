@class HMDSleepConfigurationOperationStatusWrapper, HMDSleepConfigurationOperationTypeWrapper, NSString, HAPTLVUnsignedNumberValue;

@interface HMDSelectedSleepConfigurationTLV : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HMDSleepConfigurationOperationTypeWrapper *operationType;
@property (retain, nonatomic) HMDSleepConfigurationOperationStatusWrapper *operationStatus;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *backoffTime;
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
- (id)initWithOperationType:(id)a0 operationStatus:(id)a1 backoffTime:(id)a2;

@end

@class NSString, HAPTLVUnsignedNumberValue, HAPCharacteristicValueRange, NSMutableArray;

@interface HAPCharacteristicValueLinearDerivedTransition : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) NSMutableArray *transitionPoints;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *sourceHAPInstanceID;
@property (retain, nonatomic) HAPCharacteristicValueRange *sourceValueRange;
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
- (id)initWithTransitionPoints:(id)a0 sourceHAPInstanceID:(id)a1 sourceValueRange:(id)a2;
- (id)serializeWithError:(id *)a0;

@end

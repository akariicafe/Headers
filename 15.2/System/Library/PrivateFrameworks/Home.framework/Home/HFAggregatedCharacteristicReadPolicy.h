@class NSArray, NSString;

@interface HFAggregatedCharacteristicReadPolicy : NSObject <HFCharacteristicReadPolicy, NSCopying, NSMutableCopying>

@property (readonly, nonatomic) NSArray *policies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPolicies:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)evaluateWithCharacteristic:(id)a0 traits:(out id *)a1;

@end

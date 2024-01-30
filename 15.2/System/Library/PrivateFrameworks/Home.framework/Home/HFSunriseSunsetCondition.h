@class NSString, NSDateComponents;

@interface HFSunriseSunsetCondition : HFTimeCondition <HFPrimitiveTimeCondition>

@property (readonly, copy, nonatomic) NSString *significantEvent;
@property (readonly, nonatomic) NSDateComponents *offset;
@property (readonly, nonatomic) unsigned long long comparisonType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPredicate:(id)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)initWithSignificantEvent:(id)a0 comparisonType:(unsigned long long)a1;
- (id)initWithSignificantEvent:(id)a0 offset:(id)a1 comparisonType:(unsigned long long)a2;

@end

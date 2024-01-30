@class NSString, NSDateComponents;

@interface HFDateComponentsCondition : HFTimeCondition <HFPrimitiveTimeCondition>

@property (readonly, nonatomic) NSDateComponents *dateComponents;
@property (readonly, nonatomic) BOOL isTimeOfDayCondition;
@property (readonly, nonatomic) unsigned long long comparisonType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (unsigned long long)timeConditionType;
- (id)initWithPredicate:(id)a0;
- (id)initWithDateComponents:(id)a0 comparisonType:(unsigned long long)a1;

@end

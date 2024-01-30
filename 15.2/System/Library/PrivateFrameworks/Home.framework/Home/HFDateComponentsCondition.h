@class NSString, NSDateComponents;

@interface HFDateComponentsCondition : HFTimeCondition <HFPrimitiveTimeCondition>

@property (readonly, nonatomic) NSDateComponents *dateComponents;
@property (readonly, nonatomic) BOOL isTimeOfDayCondition;
@property (readonly, nonatomic) unsigned long long comparisonType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPredicate:(id)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)timeConditionType;
- (id)initWithDateComponents:(id)a0 comparisonType:(unsigned long long)a1;

@end

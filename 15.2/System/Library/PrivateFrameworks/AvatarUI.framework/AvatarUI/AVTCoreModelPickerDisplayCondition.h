@interface AVTCoreModelPickerDisplayCondition : NSObject

@property (readonly, nonatomic) unsigned long long targetSectionIndex;
@property (readonly, nonatomic) unsigned long long value;

+ (unsigned long long)conditionValueFromString:(id)a0;
+ (id)displayConditionFromDictionnary:(id)a0;

- (id)initWithTargetSectionIndex:(unsigned long long)a0 value:(unsigned long long)a1;

@end

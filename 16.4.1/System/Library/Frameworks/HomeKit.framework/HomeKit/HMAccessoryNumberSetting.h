@class NSNumber;

@interface HMAccessoryNumberSetting : HMAccessorySetting

@property (readonly) NSNumber *minimumValue;
@property (readonly) NSNumber *maximumValue;
@property (readonly) NSNumber *stepValue;

- (Class)valueClass;
- (void)updateValue:(id)a0;
- (id)initWithKey:(id)a0 properties:(unsigned long long)a1 value:(id)a2;
- (id)initWithKey:(id)a0 properties:(unsigned long long)a1 value:(id)a2 minimumValue:(id)a3 maximumValue:(id)a4 stepValue:(id)a5;

@end

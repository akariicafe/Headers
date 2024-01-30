@class NSNumber;

@interface HMNumberSetting : HMSetting

@property (readonly) NSNumber *minimumValue;
@property (readonly) NSNumber *maximumValue;
@property (readonly) NSNumber *stepValue;

- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (id)valueForUpdate:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 type:(long long)a2 value:(id)a3 properties:(unsigned long long)a4 minimumValue:(id)a5 maximumValue:(id)a6 stepValue:(id)a7;
- (id)internalValue;

@end

@class NSNumber;

@interface HMNumberSetting : HMSetting

@property (readonly) NSNumber *minimumValue;
@property (readonly) NSNumber *maximumValue;
@property (readonly) NSNumber *stepValue;

- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (id)internalValue;
- (id)valueForUpdate:(id)a0;

@end

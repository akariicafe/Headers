@class NSNumber;

@interface HMNumberSetting : HMSetting

@property (readonly) NSNumber *minimumValue;
@property (readonly) NSNumber *maximumValue;
@property (readonly) NSNumber *stepValue;

- (id)valueForUpdate:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (id)internalValue;
- (void).cxx_destruct;

@end

@class NSString;

@interface CHHapticParameterAttributesImpl : NSObject <CHHapticParameterAttributes>

@property (readonly) float minValue;
@property (readonly) float maxValue;
@property (readonly) float defaultValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithMinValue:(float)a0 maxValue:(float)a1 defaultValue:(float)a2;

@end

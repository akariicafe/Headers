@class NSUnit;

@interface PPTUnit : NSObject

@property (readonly) NSUnit *unit;

+ (id)grams;
+ (id)milliVolts;
+ (id)dimensionless;
+ (id)unitWithJSONObject:(id)a0;
+ (id)celsius;
+ (id)unitWithProto:(id)a0;
+ (id)volts;
+ (BOOL)isValidUnitJSON:(id)a0;
+ (id)microWattHours;
+ (id)milliAmperes;
+ (id)seconds;
+ (id)milliAmpereHours;

- (id)initWithUnit:(id)a0;
- (id)proto;
- (void).cxx_destruct;

@end

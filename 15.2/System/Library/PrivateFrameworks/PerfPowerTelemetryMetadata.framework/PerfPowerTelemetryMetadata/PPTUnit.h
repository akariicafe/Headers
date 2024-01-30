@class NSUnit;

@interface PPTUnit : NSObject

@property (readonly) NSUnit *unit;

+ (id)unitWithProto:(id)a0;
+ (id)unitWithJSONObject:(id)a0;
+ (id)volts;
+ (id)seconds;
+ (BOOL)isValidUnitJSON:(id)a0;
+ (id)celsius;

- (id)initWithUnit:(id)a0;
- (void).cxx_destruct;
- (id)proto;

@end

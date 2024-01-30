@interface PPTRounding : NSObject

@property (readonly) int type;
@property (readonly) unsigned long long value;

+ (id)roundUp;
+ (id)roundDown;
+ (id)roundNearest;
+ (id)roundingWithJSONObject:(id)a0;
+ (BOOL)isValidRoundingJSON:(id)a0;
+ (id)roundingWithProto:(id)a0;

- (id)initWithType:(int)a0 value:(unsigned long long)a1;
- (id)proto;

@end

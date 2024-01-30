@interface PPTCadenceTuple : NSObject

@property (readonly) int type;
@property (readonly) unsigned long long value;

+ (id)cadenceTupleWithJSONObject:(id)a0;
+ (BOOL)isValidCadenceTupleJSON:(id)a0;

- (id)initWithCadenceType:(int)a0 value:(unsigned long long)a1;

@end

@class NSArray;

@interface PPTCadence : NSObject

@property (readonly) NSArray *cadenceTuples;

+ (id)cadenceWithProto:(id)a0;
+ (id)cadenceInit_EventSBC;
+ (id)cadenceInit;
+ (id)cadenceEventSBC;
+ (id)cadenceEventXPCWithFrequency:(unsigned long long)a0;
+ (id)cadenceWithJSONObject:(id)a0;
+ (BOOL)isValidCadenceJSON:(id)a0;

- (id)proto;
- (id)initWithCadenceTuples:(id)a0;
- (void).cxx_destruct;

@end

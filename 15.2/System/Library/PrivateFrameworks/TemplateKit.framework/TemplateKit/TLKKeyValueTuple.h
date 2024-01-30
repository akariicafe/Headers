@class NSString;

@interface TLKKeyValueTuple : TLKObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *value;

+ (id)tupleWithKey:(id)a0 value:(id)a1;
+ (id)tuplesForDictionary:(id)a0;
+ (id)tuplesForKeys:(id)a0 values:(id)a1;

- (void).cxx_destruct;

@end

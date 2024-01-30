@interface BLTObjectSerializer : NSObject

+ (id)unserializeObject:(id)a0 nulls:(id)a1 error:(id *)a2;
+ (id)serializeObject:(id)a0 nulls:(id *)a1 error:(id *)a2;
+ (unsigned long long)sizeOfObject:(id)a0;

@end

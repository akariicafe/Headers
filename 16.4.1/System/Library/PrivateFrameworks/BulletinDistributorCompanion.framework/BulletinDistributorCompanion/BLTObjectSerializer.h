@interface BLTObjectSerializer : NSObject

+ (id)serializeObject:(id)a0 nulls:(id *)a1 error:(id *)a2;
+ (unsigned long long)sizeOfObject:(id)a0;
+ (id)unserializeObject:(id)a0 nulls:(id)a1 error:(id *)a2;

@end

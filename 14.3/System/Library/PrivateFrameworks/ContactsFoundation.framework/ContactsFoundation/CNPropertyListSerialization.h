@interface CNPropertyListSerialization : NSObject

+ (id)objectWithData:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
+ (id)dataWithObject:(id)a0 error:(id *)a1;
+ (id)objectWithData:(id)a0 error:(id *)a1;
+ (id)mutableObjectWithData:(id)a0 error:(id *)a1;

@end

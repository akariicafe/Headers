@interface CNArchiver : NSObject

+ (id)os_log;
+ (id)encodeObject:(id)a0 error:(id *)a1;
+ (id)decodeObjectOfClass:(Class)a0 data:(id)a1 error:(id *)a2;
+ (id)decodeObjectOfClass:(Class)a0 associatedClasses:(id)a1 data:(id)a2 error:(id *)a3;

@end

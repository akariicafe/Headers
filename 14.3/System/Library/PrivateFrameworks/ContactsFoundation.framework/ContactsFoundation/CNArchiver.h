@interface CNArchiver : NSObject

+ (id)decodeObjectOfClass:(Class)a0 associatedClasses:(id)a1 data:(id)a2 error:(id *)a3;
+ (id)decodeObjectOfClass:(Class)a0 data:(id)a1 error:(id *)a2;
+ (id)encodeObject:(id)a0 error:(id *)a1;
+ (id)os_log;

@end

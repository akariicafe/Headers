@class NSHashTable;

@interface HMBSQLFile : HMFObject

@property (class, readonly, nonatomic) NSHashTable *contexts;

+ (id)open:(id)a0;
+ (id)open:(id)a0 readOnly:(BOOL)a1 using:(Class)a2 error:(id *)a3;
+ (void)close:(id)a0;
+ (void)removeDatastoreAtURL:(id)a0;
+ (id)open:(id)a0 readOnly:(BOOL)a1 error:(id *)a2 initializer:(id /* block */)a3;

@end

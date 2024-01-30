@class NSString, NSEntityDescription, NSArray;

@interface NSBatchInsertRequest : NSPersistentStoreRequest {
    id _entity;
    id /* block */ _insertDictionaryHandler;
    id /* block */ _insertManagedObjectHandler;
    struct _insertRequestFlags { unsigned char resultType : 2; unsigned char entityIsName : 1; unsigned char secureOperation : 1; unsigned int _RESERVED : 28; } _flags;
}

@property (readonly, copy) NSString *entityName;
@property (readonly) NSEntityDescription *entity;
@property (copy) NSArray *objectsToInsert;
@property (copy) id /* block */ dictionaryHandler;
@property (copy) id /* block */ managedObjectHandler;
@property unsigned long long resultType;

+ (id)stringForResultType:(unsigned long long)a0;
+ (id)batchInsertRequestWithEntityName:(id)a0 objects:(id)a1;
+ (id)batchInsertRequestWithEntityName:(id)a0 dictionaryHandler:(id /* block */)a1;
+ (id)batchInsertRequestWithEntityName:(id)a0 managedObjectHandler:(id /* block */)a1;
+ (id)shortStringForResultType:(unsigned long long)a0;
+ (id)decodeFromXPCArchive:(id)a0 withContext:(id)a1;

- (BOOL)_secureOperation;
- (void)_resolveEntityWithContext:(id)a0;
- (unsigned long long)requestType;
- (void)_setSecureOperation:(BOOL)a0;
- (id)encodeForXPC;
- (id)init;
- (id)initWithEntityName:(id)a0 dictionaryHandler:(id /* block */)a1;
- (id)initWithEntityName:(id)a0 managedObjectHandler:(id /* block */)a1;
- (id)initWithEntity:(id)a0 objects:(id)a1;
- (id)initWithEntity:(id)a0 managedObjectHandler:(id /* block */)a1;
- (id)initWithEntity:(id)a0 dictionaryHandler:(id /* block */)a1;
- (void)dealloc;
- (id)description;
- (id)initWithEntityName:(id)a0 objects:(id)a1;
- (void)_resolveEntityWithSQLCore:(id)a0;

@end

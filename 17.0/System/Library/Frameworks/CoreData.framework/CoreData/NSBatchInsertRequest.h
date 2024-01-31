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

+ (id)decodeFromXPCArchive:(id)a0 withContext:(id)a1 withPolicy:(id)a2;
+ (id)batchInsertRequestWithEntityName:(id)a0 dictionaryHandler:(id /* block */)a1;
+ (id)batchInsertRequestWithEntityName:(id)a0 managedObjectHandler:(id /* block */)a1;
+ (id)batchInsertRequestWithEntityName:(id)a0 objects:(id)a1;

- (BOOL)_secureOperation;
- (id)init;
- (void)dealloc;
- (id)encodeForXPC;
- (void)_resolveEntityWithContext:(id)a0;
- (void)_setSecureOperation:(BOOL)a0;
- (unsigned long long)requestType;
- (id)description;
- (id)initWithEntity:(id)a0 dictionaryHandler:(id /* block */)a1;
- (id)initWithEntity:(id)a0 managedObjectHandler:(id /* block */)a1;
- (id)initWithEntity:(id)a0 objects:(id)a1;
- (id)initWithEntityName:(id)a0 dictionaryHandler:(id /* block */)a1;
- (id)initWithEntityName:(id)a0 managedObjectHandler:(id /* block */)a1;
- (id)initWithEntityName:(id)a0 objects:(id)a1;

@end

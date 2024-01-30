@class NSFetchRequest;

@interface NSBatchDeleteRequest : NSPersistentStoreRequest {
    NSFetchRequest *_deleteTarget;
    long long _flags;
}

@property unsigned long long resultType;
@property (readonly, copy) NSFetchRequest *fetchRequest;

+ (id)decodeFromXPCArchive:(id)a0 withContext:(id)a1;

- (BOOL)_secureOperation;
- (id)initWithFetchRequest:(id)a0;
- (void)_resolveEntityWithContext:(id)a0;
- (unsigned long long)requestType;
- (void)_setSecureOperation:(BOOL)a0;
- (id)encodeForXPC;
- (void)setShouldPerformSecureOperation:(BOOL)a0;
- (void)dealloc;
- (id)description;
- (BOOL)shouldPerformSecureOperation;
- (id)initWithObjectIDs:(id)a0;

@end

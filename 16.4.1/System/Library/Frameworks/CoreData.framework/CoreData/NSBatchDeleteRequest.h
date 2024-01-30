@class NSFetchRequest;

@interface NSBatchDeleteRequest : NSPersistentStoreRequest {
    NSFetchRequest *_deleteTarget;
    long long _flags;
}

@property unsigned long long resultType;
@property (readonly, copy) NSFetchRequest *fetchRequest;

+ (id)decodeFromXPCArchive:(id)a0 withContext:(id)a1 withPolicy:(id)a2;

- (void)_setSecureOperation:(BOOL)a0;
- (BOOL)_secureOperation;
- (id)encodeForXPC;
- (void)_resolveEntityWithContext:(id)a0;
- (BOOL)shouldPerformSecureOperation;
- (id)initWithObjectIDs:(id)a0;
- (unsigned long long)requestType;
- (void)dealloc;
- (id)description;
- (void)setShouldPerformSecureOperation:(BOOL)a0;
- (id)initWithFetchRequest:(id)a0;

@end

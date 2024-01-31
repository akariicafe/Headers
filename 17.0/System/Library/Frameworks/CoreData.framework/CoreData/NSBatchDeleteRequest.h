@class NSFetchRequest;

@interface NSBatchDeleteRequest : NSPersistentStoreRequest {
    NSFetchRequest *_deleteTarget;
    long long _flags;
}

@property unsigned long long resultType;
@property (readonly, copy) NSFetchRequest *fetchRequest;

+ (id)decodeFromXPCArchive:(id)a0 withContext:(id)a1 withPolicy:(id)a2;

- (BOOL)_secureOperation;
- (void)dealloc;
- (id)encodeForXPC;
- (BOOL)shouldPerformSecureOperation;
- (void)setShouldPerformSecureOperation:(BOOL)a0;
- (void)_resolveEntityWithContext:(id)a0;
- (void)_setSecureOperation:(BOOL)a0;
- (unsigned long long)requestType;
- (id)initWithFetchRequest:(id)a0;
- (id)description;
- (id)initWithObjectIDs:(id)a0;

@end

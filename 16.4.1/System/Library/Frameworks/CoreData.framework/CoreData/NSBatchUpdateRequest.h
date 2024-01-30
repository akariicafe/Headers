@class NSString, NSPredicate, NSDictionary;

@interface NSBatchUpdateRequest : NSPersistentStoreRequest <NSPredicatedStoreRequest> {
    struct _requestFlags { unsigned char includesSubentities : 1; unsigned char resultType : 2; unsigned char entityIsName : 1; unsigned char secureOperation : 1; unsigned int _RESERVED : 27; } _flags;
}

@property (nonatomic, getter=_secureOperation, setter=_setSecureOperation:) BOOL shouldPerformSecureOperation;
@property (readonly, copy) NSString *entityName;
@property (readonly) id entity;
@property (retain) NSPredicate *predicate;
@property BOOL includesSubentities;
@property unsigned long long resultType;
@property (copy) NSDictionary *propertiesToUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decodeFromXPCArchive:(id)a0 withContext:(id)a1 withPolicy:(id)a2;
+ (id)batchUpdateRequestWithEntityName:(id)a0;

- (id)initWithEntity:(id)a0;
- (id)encodeForXPC;
- (id)initWithEntityName:(id)a0;
- (void)_resolveEntityWithContext:(id)a0;
- (BOOL)shouldPerformSecureOperation;
- (unsigned long long)requestType;
- (void)dealloc;
- (id)init;
- (void)setShouldPerformSecureOperation:(BOOL)a0;

@end

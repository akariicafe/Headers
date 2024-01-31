@class NSDictionary;

@interface NSCachingFetchRequest : NSFetchRequest {
    NSDictionary *_substitutionVariables;
    id _cachedInfo;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) id _identifier;
@property (copy, nonatomic) NSDictionary *substitutionVariables;

+ (id)_generateIdentifier;

- (id)init;
- (void)dealloc;
- (id)_cachedInfoForRequestor:(id)a0;
- (id)_copyForDirtyContext;
- (void)_cacheInfo:(id)a0 forRequestor:(id)a1;
- (void)_disableSQLStatementCaching;
- (BOOL)_isCachingFetchRequest;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

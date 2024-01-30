@class NSDictionary;

@interface NSCachingFetchRequest : NSFetchRequest {
    NSDictionary *_substitutionVariables;
    id _cachedInfo;
    id _identifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, nonatomic) NSDictionary *substitutionVariables;

+ (id)_generateIdentifier;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isCachingFetchRequest;
- (void)dealloc;
- (id)_copyForDirtyContext;

@end

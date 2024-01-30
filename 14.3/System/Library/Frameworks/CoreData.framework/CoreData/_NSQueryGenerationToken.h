@class NSString, _PFWeakReference;

@interface _NSQueryGenerationToken : NSQueryGenerationToken {
    NSString *_storeIdentifier;
    _PFWeakReference *_store;
    id _generationIdentifier;
    struct _queryGenerationFlags { unsigned char _isCompound : 1; unsigned char _isSingleton : 1; unsigned char _freeValueOnDealloc : 1; unsigned char _isUnmoored : 1; unsigned short _reservedFlags : 12; } _flags;
}

+ (BOOL)supportsSecureCoding;

- (id)persistentStoreCoordinator;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)retain;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

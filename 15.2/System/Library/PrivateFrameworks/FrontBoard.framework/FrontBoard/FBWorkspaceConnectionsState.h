@class NSSet, NSMutableIndexSet;

@interface FBWorkspaceConnectionsState : NSObject <NSCopying, NSMutableCopying> {
    NSMutableIndexSet *_pidSet;
}

@property (class, readonly, nonatomic) unsigned long long minimumSerializedDataLength;

@property (readonly, nonatomic) unsigned long long serializedDataLength;
@property (readonly, copy, nonatomic) NSSet *workspaceIdentities;

+ (id)deserializeLength:(out unsigned long long *)a0 fromReader:(id /* block */)a1;

- (id)mutableCopy;
- (id)_initWithIndexSet:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (long long)serializeToWriter:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (unsigned long long)hash;

@end

@class NSDictionary, NSMutableDictionary, NSString;

@interface BSMachServiceAliases : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *_lock_aliases;
    NSString *_lock_encoded;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _mutable;
}

@property (readonly, copy, nonatomic) NSDictionary *environmentRepresentation;

+ (id)environmentAliases;

- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)resolveMachService:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (unsigned long long)hash;

@end

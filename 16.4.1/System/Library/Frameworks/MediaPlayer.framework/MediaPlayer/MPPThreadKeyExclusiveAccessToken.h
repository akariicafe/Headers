@interface MPPThreadKeyExclusiveAccessToken : NSObject <MPExclusiveAccessToken> {
    unsigned long long _key;
    id _owner;
}

+ (id)tokenWithKey:(unsigned long long)a0 owner:(id)a1;

- (id)_init;
- (void)assertHasExclusiveAccessForOwner:(id)a0;

@end

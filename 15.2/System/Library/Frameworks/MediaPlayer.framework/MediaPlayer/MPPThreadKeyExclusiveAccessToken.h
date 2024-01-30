@interface MPPThreadKeyExclusiveAccessToken : NSObject <MPExclusiveAccessToken> {
    unsigned long long _key;
    id _owner;
}

+ (id)tokenWithKey:(unsigned long long)a0 owner:(id)a1;

- (void)assertHasExclusiveAccessForOwner:(id)a0;
- (id)_init;

@end

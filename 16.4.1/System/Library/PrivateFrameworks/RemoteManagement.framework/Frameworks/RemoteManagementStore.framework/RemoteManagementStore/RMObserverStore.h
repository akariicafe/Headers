@interface RMObserverStore : RMBaseStore <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)storesWithScope:(long long)a0 completionHandler:(id /* block */)a1;
+ (void)storeWithIdentifier:(id)a0 scope:(long long)a1 completionHandler:(id /* block */)a2;
+ (void)storesWithCompletionHandler:(id /* block */)a0;

- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToStore:(id)a0;

@end

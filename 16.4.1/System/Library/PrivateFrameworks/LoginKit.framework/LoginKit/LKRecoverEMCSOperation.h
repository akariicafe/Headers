@interface LKRecoverEMCSOperation : LKOperation

@property (readonly, nonatomic) long long recoveredKeychainItemCount;

- (id)dictionary;
- (id)init;
- (void)setRecoveredKeychainItemCount:(long long)a0;

@end

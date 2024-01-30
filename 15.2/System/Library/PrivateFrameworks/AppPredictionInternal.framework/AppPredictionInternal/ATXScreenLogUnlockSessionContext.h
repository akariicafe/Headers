@class ATXHomeScreenLogUnlockSessionManager;

@interface ATXScreenLogUnlockSessionContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) ATXHomeScreenLogUnlockSessionManager *unlockSessionManager;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithUnlockSessionManager:(id)a0;
- (BOOL)isEqualToATXScreenLogUnlockSessionContext:(id)a0;
- (void)updateWithClientModelCacheUpdate:(id)a0;
- (void)updateWithBlendingUICacheUpdate:(id)a0;
- (void)updateWithUIEvent:(id)a0;

@end

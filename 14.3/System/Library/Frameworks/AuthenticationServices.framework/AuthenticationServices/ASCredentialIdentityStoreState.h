@interface ASCredentialIdentityStoreState : NSObject

@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) BOOL supportsIncrementalUpdates;

- (id)description;
- (id)initWithEnabledState:(BOOL)a0 supportsIncrementalUpdates:(BOOL)a1;

@end

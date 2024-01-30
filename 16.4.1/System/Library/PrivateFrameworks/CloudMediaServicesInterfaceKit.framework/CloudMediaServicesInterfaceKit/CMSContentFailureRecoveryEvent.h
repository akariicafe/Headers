@interface CMSContentFailureRecoveryEvent : CMSBaseContentFailureEvent

@property (nonatomic) unsigned long long recoveryDuration;

- (id)encoded;
- (id)initWithSessionID:(id)a0 sessionIdentifier:(id)a1 recoveryDuration:(unsigned long long)a2;

@end

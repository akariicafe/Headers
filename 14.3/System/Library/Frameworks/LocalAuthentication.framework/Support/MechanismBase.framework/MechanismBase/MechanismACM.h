@interface MechanismACM : MechanismBase

@property (readonly, nonatomic) struct __ACMHandle { } *acmContext;
@property (readonly, nonatomic) unsigned long long acmFlags;

- (id)initWithEventIdentifier:(long long)a0 remoteViewController:(long long)a1 acmContextRecord:(id)a2 request:(id)a3;

@end

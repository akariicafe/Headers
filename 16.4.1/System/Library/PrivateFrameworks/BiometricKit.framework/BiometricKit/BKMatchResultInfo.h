@class BKIdentity;

@interface BKMatchResultInfo : NSObject

@property (retain, nonatomic) BKIdentity *identity;
@property (nonatomic) long long lockoutState;
@property (nonatomic) BOOL unlocked;
@property (nonatomic) BOOL credentialAdded;
@property (readonly, nonatomic) BOOL resultIgnored;

- (void).cxx_destruct;
- (id)initWithServerIdentity:(id)a0 details:(id)a1 device:(id)a2;

@end

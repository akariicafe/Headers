@class ACAccount;

@interface HUAppleMusicAccountItem : HUAppleMusicItem

@property (readonly, nonatomic) ACAccount *account;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithMediaProfileContainer:(id)a0 account:(id)a1;

@end

@class ACAccount;

@interface HUAppleMusicAccountItem : HUAppleMusicItem

@property (readonly, nonatomic) ACAccount *account;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithMediaProfileContainer:(id)a0 account:(id)a1;

@end

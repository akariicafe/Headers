@class HMHome, NSMutableSet;

@interface HFUserItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *userItems;
@property (nonatomic) BOOL includeCurrentUser;
@property (nonatomic) BOOL includeOtherUsers;
@property (nonatomic) unsigned long long nameStyle;
@property (readonly, nonatomic) HMHome *home;

- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)items;
- (id)invalidationReasons;

@end

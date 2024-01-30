@class HMHome, NSMutableSet;

@interface HFUserItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *userItems;
@property (nonatomic) BOOL includeCurrentUser;
@property (nonatomic) BOOL includeOtherUsers;
@property (nonatomic) unsigned long long nameStyle;
@property (readonly, nonatomic) HMHome *home;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)items;
- (id)reloadItems;
- (id)initWithHome:(id)a0;
- (id)invalidationReasons;

@end

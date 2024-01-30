@class NSString, WFKnownNetworkStore;

@interface WFKnownNetworksListController : NSObject <WFKnownNetworksViewControllerDelegate>

@property (retain, nonatomic) WFKnownNetworkStore *knownNetworkStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithKnownNetworkStore:(id)a0;
- (void)pushKnownNetworksOnParentViewController:(id)a0;
- (id)getKnownNetworksList;
- (void)removeKnownNetworkWithSsid:(id)a0;
- (id)getSecurityTypeStringForNetwork:(id)a0;
- (id)getPasswordForNetwork:(id)a0;
- (BOOL)isNetworkHidden:(id)a0;
- (id)getDateAddedForNetwork:(id)a0;
- (id)getDateLastJoinedForNetwork:(id)a0;
- (BOOL)isNetworkBlacklisted:(id)a0;
- (id)getScoreForNetwork:(id)a0;
- (id)getGeoTagsForNetwork:(id)a0;

@end

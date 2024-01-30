@class NSString, NSMutableSet, NSSet;

@interface HFNetworkConfigurationAllowedHostGroup : NSObject

@property (retain, nonatomic) NSMutableSet *mutableAddresses;
@property (nonatomic) unsigned long long purpose;
@property (retain, nonatomic) NSMutableSet *mutableAllowedHosts;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSSet *addresses;
@property (readonly, copy, nonatomic) NSSet *allowedHosts;
@property (readonly, copy, nonatomic) NSString *purposeLocalizedDescription;

+ (id)groupsForNetworkConfigurationProfiles:(id)a0;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)addAllowedHost:(id)a0;

@end

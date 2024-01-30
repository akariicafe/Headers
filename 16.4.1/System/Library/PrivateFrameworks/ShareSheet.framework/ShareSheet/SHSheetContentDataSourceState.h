@class UIAirDropNode, NSArray, NSDictionary, NSOrderedSet;

@interface SHSheetContentDataSourceState : NSObject

@property (retain, nonatomic) UIAirDropNode *airDropProxy;
@property (copy, nonatomic) NSArray *peopleProxies;
@property (copy, nonatomic) NSDictionary *peopleProxyByUUID;
@property (copy, nonatomic) NSArray *peopleIdentifiers;
@property (copy, nonatomic) NSArray *shareProxies;
@property (copy, nonatomic) NSDictionary *shareProxyByUUID;
@property (copy, nonatomic) NSArray *shareIdentifiers;
@property (copy, nonatomic) NSArray *actionProxies;
@property (copy, nonatomic) NSDictionary *actionProxyByUUID;
@property (copy, nonatomic) NSArray *heroActionIdentifiers;
@property (copy, nonatomic) NSArray *informationalActionIdentifiers;
@property (copy, nonatomic) NSArray *favoriteActionIdentifiers;
@property (copy, nonatomic) NSArray *systemActionIdentifiers;
@property (copy, nonatomic) NSArray *extensionActionIdentifiers;
@property (copy, nonatomic) NSDictionary *customActionIdentifiersByCustomSectionIdentifier;
@property (copy, nonatomic) NSOrderedSet *customSectionIdentifiers;
@property (copy, nonatomic) NSDictionary *activitiesByUUID;
@property (nonatomic) unsigned int nearbyCountSlotID;

- (id)description;
- (void).cxx_destruct;

@end

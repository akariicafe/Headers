@class SALocalSearchMapItem;

@interface SALocalSearchShareLocationWithExternalAccessory : SADomainCommand

@property (retain, nonatomic) SALocalSearchMapItem *mapItem;
@property (nonatomic) BOOL useNavigationDestination;

+ (id)shareLocationWithExternalAccessory;
+ (id)shareLocationWithExternalAccessoryWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end

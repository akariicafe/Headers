@class SALocalSearchRoute, SALocalSearchMapItem, NSString, SALocalSearchMapItemList, SALocalSearchAceNavigationEta;

@interface SALocalSearchGetNavigationStatusCompleted : SABaseCommand <SAServerBoundCommand, SABackgroundContextObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SALocalSearchMapItem *destination;
@property (retain, nonatomic) SALocalSearchAceNavigationEta *nextManeuverEta;
@property (retain, nonatomic) SALocalSearchAceNavigationEta *overallEta;
@property (retain, nonatomic) SALocalSearchMapItemList *predictedDestinations;
@property (retain, nonatomic) SALocalSearchRoute *route;
@property (copy, nonatomic) NSString *trafficIncidentAlertType;
@property (copy, nonatomic) NSString *volume;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getNavigationStatusCompleted;
+ (id)getNavigationStatusCompletedWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end

@class NSString, CLPlacemark, WFVariableString;

@interface WFLocationValue : NSObject <WFVariableSerialization>

@property (readonly, nonatomic) WFVariableString *legacyVariableString;
@property (readonly, nonatomic) NSString *locationName;
@property (readonly, nonatomic) CLPlacemark *placemark;
@property (readonly, nonatomic, getter=isCurrentLocation) BOOL currentLocation;
@property (readonly, nonatomic) NSString *displayString;
@property (readonly, nonatomic) NSString *defaultSearchText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serializedRepresentation;
- (void).cxx_destruct;
- (id)initWithLocationName:(id)a0;
- (id)initWithPlacemark:(id)a0;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (id)initWithLocationName:(id)a0 placemark:(id)a1;
- (id)initWithCurrentLocation;
- (id)initWithLegacyVariableString:(id)a0;

@end

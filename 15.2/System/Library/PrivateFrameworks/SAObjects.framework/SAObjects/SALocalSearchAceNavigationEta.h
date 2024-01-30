@class NSString, SADistance, SADuration;

@interface SALocalSearchAceNavigationEta : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SADistance *distanceEta;
@property (retain, nonatomic) SADuration *timeEta;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aceNavigationEta;
+ (id)aceNavigationEtaWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end

@class NSString;

@interface SAWeatherUnits : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *distanceUnits;
@property (copy, nonatomic) NSString *precipitationUnits;
@property (copy, nonatomic) NSString *pressureUnits;
@property (copy, nonatomic) NSString *speedUnits;
@property (copy, nonatomic) NSString *temperatureUnits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)units;
+ (id)unitsWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end

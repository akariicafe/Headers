@class NSString, NSNumber;

@interface SAWeatherWindSpeed : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *windDirection;
@property (copy, nonatomic) NSNumber *windDirectionDegree;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)windSpeed;
+ (id)windSpeedWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end

@class NSString, CLPlacemark, INDateComponentsRange;

@interface INBusTrip : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *provider;
@property (readonly, copy, nonatomic) NSString *busName;
@property (readonly, copy, nonatomic) NSString *busNumber;
@property (readonly, copy, nonatomic) INDateComponentsRange *tripDuration;
@property (readonly, copy, nonatomic) CLPlacemark *departureBusStopLocation;
@property (readonly, copy, nonatomic) NSString *departurePlatform;
@property (readonly, copy, nonatomic) CLPlacemark *arrivalBusStopLocation;
@property (readonly, copy, nonatomic) NSString *arrivalPlatform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)initWithProvider:(id)a0 busName:(id)a1 busNumber:(id)a2 tripDuration:(id)a3 departureBusStopLocation:(id)a4 departurePlatform:(id)a5 arrivalBusStopLocation:(id)a6 arrivalPlatform:(id)a7;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;

@end

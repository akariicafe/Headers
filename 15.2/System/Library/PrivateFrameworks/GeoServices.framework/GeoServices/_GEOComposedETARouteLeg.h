@class NSArray, GEOComposedRouteEVChargingStationInfo;

@interface _GEOComposedETARouteLeg : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long originalLegIndex;
@property (retain, nonatomic) NSArray *steps;
@property (retain, nonatomic) GEOComposedRouteEVChargingStationInfo *chargingStationInfo;
@property (readonly, nonatomic) double travelDuration;

- (void)encodeWithCoder:(id)a0;
- (id)descriptionWithPrecision:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

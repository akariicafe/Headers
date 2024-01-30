@class GEOComposedRouteTraffic, NSMutableDictionary;

@interface GEOComposedRouteMutableData : NSObject <NSSecureCoding> {
    NSMutableDictionary *_stepsIDToEVInfos;
    NSMutableDictionary *_legIndexToChargingStationInfos;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) GEOComposedRouteTraffic *traffic;

- (void).cxx_destruct;
- (void)updateForRoute:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)updateForRoute:(id)a0 etaRoute:(id)a1;
- (id)chargingStationInfoForLegIndex:(unsigned long long)a0;
- (id)evInfoForStepID:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end

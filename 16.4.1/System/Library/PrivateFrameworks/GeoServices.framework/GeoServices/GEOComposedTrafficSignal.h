@class GEOTrafficSignal;

@interface GEOComposedTrafficSignal : GEOComposedEnrouteNotice <NSSecureCoding> {
    GEOTrafficSignal *_trafficSignal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (readonly, nonatomic) unsigned int countryCode;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)position;
- (id)description;
- (void).cxx_destruct;
- (id)initWithEnrouteNotice:(id)a0 enrouteNoticeIndex:(unsigned long long)a1 legIndex:(unsigned long long)a2 trafficSignal:(id)a3 onRoute:(id)a4;

@end

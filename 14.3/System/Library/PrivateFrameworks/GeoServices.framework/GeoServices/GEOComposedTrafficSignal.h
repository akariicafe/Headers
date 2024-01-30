@class GEOTrafficSignal;

@interface GEOComposedTrafficSignal : GEOComposedEnrouteNotice <NSSecureCoding> {
    GEOTrafficSignal *_trafficSignal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int type;

- (id)position;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithEnrouteNotice:(id)a0 enrouteNoticeIndex:(unsigned long long)a1 legIndex:(unsigned long long)a2 trafficSignal:(id)a3 onRoute:(id)a4;
- (void)encodeWithCoder:(id)a0;

@end

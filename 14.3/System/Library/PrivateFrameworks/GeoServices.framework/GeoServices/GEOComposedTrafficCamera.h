@class NSString, GEOTrafficCamera;

@interface GEOComposedTrafficCamera : GEOComposedEnrouteNotice <NSSecureCoding> {
    GEOTrafficCamera *_trafficCamera;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) unsigned int highlightDistance;
@property (readonly, nonatomic) BOOL hasSpeedLimitText;
@property (readonly, nonatomic) NSString *speedLimitText;
@property (readonly, nonatomic) BOOL hasSpeedThreshold;
@property (readonly, nonatomic) double speedThreshold;
@property (readonly, nonatomic) BOOL hasCameraPriority;
@property (readonly, nonatomic) unsigned int cameraPriority;

- (id)position;
- (void).cxx_destruct;
- (id)initWithEnrouteNotice:(id)a0 enrouteNoticeIndex:(unsigned long long)a1 legIndex:(unsigned long long)a2 trafficCamera:(id)a3 onRoute:(id)a4;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)titleFormatForLocation:(id)a0;
- (id)detailFormatForLocation:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

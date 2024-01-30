@class MNTraceRecordingData, GEODirectionsRequest, NSArray, NSDictionary, GEORouteAttributes, GEODirectionsResponse, NSString;

@interface MNStartNavigationDetails : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int navigationType;
@property (nonatomic) BOOL fullGuidance;
@property (copy, nonatomic) GEORouteAttributes *routeAttributes;
@property (copy, nonatomic) GEODirectionsRequest *directionsRequest;
@property (copy, nonatomic) GEODirectionsResponse *directionsResponse;
@property (copy, nonatomic) NSArray *routes;
@property (copy, nonatomic) NSDictionary *traffic;
@property (nonatomic) unsigned long long selectedRouteIndex;
@property (copy, nonatomic) NSString *requestingAppIdentifier;
@property (nonatomic) BOOL isReconnecting;
@property (copy, nonatomic) NSString *tracePlaybackPath;
@property (retain, nonatomic) MNTraceRecordingData *traceRecordingData;
@property (nonatomic) long long simulationType;
@property (copy, nonatomic) NSString *traceRecordingNameOverride;
@property (readonly, nonatomic) NSString *fullDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end

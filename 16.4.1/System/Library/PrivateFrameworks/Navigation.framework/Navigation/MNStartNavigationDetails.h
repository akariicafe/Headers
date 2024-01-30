@class MNLocation, NSArray, NSString, GEODirectionsRequest, GEORouteAttributes, GEODirectionsResponse, NSDictionary, MNTraceRecordingData, MNStartNavigationReconnectionDetails;

@interface MNStartNavigationDetails : NSObject <NSCopying, NSSecureCoding> {
    MNStartNavigationReconnectionDetails *_reconnectionDetails;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) MNStartNavigationReconnectionDetails *reconnectionDetails;
@property (nonatomic) long long navigationType;
@property (nonatomic) unsigned long long guidanceType;
@property (retain, nonatomic) GEORouteAttributes *routeAttributes;
@property (retain, nonatomic) GEODirectionsRequest *directionsRequest;
@property (retain, nonatomic) GEODirectionsResponse *directionsResponse;
@property (retain, nonatomic) NSArray *routes;
@property (retain, nonatomic) NSDictionary *traffic;
@property (nonatomic) unsigned long long selectedRouteIndex;
@property (retain, nonatomic) MNLocation *initialUserLocation;
@property (nonatomic) BOOL isResumingMultipointRoute;
@property (copy, nonatomic) NSString *requestingAppIdentifier;
@property (nonatomic) BOOL isReconnecting;
@property (copy, nonatomic) NSString *tracePlaybackPath;
@property (retain, nonatomic) MNTraceRecordingData *traceRecordingData;
@property (nonatomic) long long simulationType;
@property (copy, nonatomic) NSString *traceRecordingNameOverride;
@property (readonly, nonatomic) NSString *fullDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end

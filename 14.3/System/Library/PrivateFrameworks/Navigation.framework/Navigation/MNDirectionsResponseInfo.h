@class NSArray, GEODirectionsRequest, GEODirectionsError, NSError, GEODirectionsResponse, MNTraceRecordingData;

@interface MNDirectionsResponseInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *routeInfos;
@property (retain, nonatomic) GEODirectionsRequest *request;
@property (retain, nonatomic) GEODirectionsResponse *response;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) GEODirectionsError *directionsError;
@property (retain, nonatomic) MNTraceRecordingData *traceRecordingData;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

@class NSArray, GEODirectionsRequest, NSError, GEODirectionsResponse, MNLocation;

@interface MNTraceRecordingData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) MNLocation *initialUserLocation;
@property (retain, nonatomic) NSArray *waypoints;
@property (retain, nonatomic) GEODirectionsRequest *initialDirectionsRequest;
@property (retain, nonatomic) GEODirectionsResponse *initialDirectionsResponse;
@property (retain, nonatomic) NSError *initialDirectionsRequestError;
@property (nonatomic) double initialDirectionsRequestTimestamp;
@property (nonatomic) double initialDirectionsResponseTimestamp;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

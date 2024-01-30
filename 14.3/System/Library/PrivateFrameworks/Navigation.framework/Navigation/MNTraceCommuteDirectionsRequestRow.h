@class GEODirectionsRequest, GEODirectionsResponse, NSError;

@interface MNTraceCommuteDirectionsRequestRow : NSObject

@property (nonatomic) unsigned long long destinationID;
@property (nonatomic) double requestTimestamp;
@property (nonatomic) double responseTimestamp;
@property (retain, nonatomic) GEODirectionsRequest *request;
@property (retain, nonatomic) GEODirectionsResponse *response;
@property (retain, nonatomic) NSError *responseError;

- (void).cxx_destruct;

@end

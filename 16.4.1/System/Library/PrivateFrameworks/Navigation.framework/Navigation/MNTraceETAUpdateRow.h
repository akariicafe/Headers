@class NSString, GEOETATrafficUpdateRequest, GEOETATrafficUpdateResponse, NSError;

@interface MNTraceETAUpdateRow : NSObject <MNTracePlayerTimelineStreamObjectType>

@property (readonly, nonatomic) double position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double requestTimestamp;
@property (nonatomic) double responseTimestamp;
@property (retain, nonatomic) GEOETATrafficUpdateRequest *request;
@property (retain, nonatomic) GEOETATrafficUpdateResponse *response;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end

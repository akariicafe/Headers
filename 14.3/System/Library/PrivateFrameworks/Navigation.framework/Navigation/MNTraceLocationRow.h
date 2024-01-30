@class NSString, NSError, MNLocationMatchInfo, MNLocation;

@interface MNTraceLocationRow : NSObject <MNTracePlayerTimelineStreamObjectType>

@property (readonly, nonatomic) double position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) MNLocation *location;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) MNLocationMatchInfo *matchInfo;
@property (nonatomic) struct { double latitude; double longitude; } correctedCoordinate;
@property (nonatomic) double correctedCourse;
@property (nonatomic) long long locationEventType;
@property (nonatomic) unsigned long long originalMatchType;

- (void).cxx_destruct;

@end

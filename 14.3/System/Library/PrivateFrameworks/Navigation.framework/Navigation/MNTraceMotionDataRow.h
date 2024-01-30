@class NSString;

@interface MNTraceMotionDataRow : NSObject <MNTracePlayerTimelineStreamObjectType>

@property (readonly, nonatomic) double position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double timestamp;
@property (nonatomic) unsigned long long motionType;
@property (nonatomic) unsigned long long exitType;
@property (nonatomic) unsigned long long confidence;


@end

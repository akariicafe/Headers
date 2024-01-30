@class NSString, VGVehicle;

@interface MNTraceEVDataRow : NSObject <MNTracePlayerTimelineStreamObjectType>

@property (readonly, nonatomic) double position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) VGVehicle *vehicle;

- (void).cxx_destruct;

@end

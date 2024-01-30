@class ATXEventTravelTimeDataSource, EKEvent, NSString, CLPlacemark, NSDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface ATXHeuristicEventTimeUtilities : NSObject

@property (retain, nonatomic) EKEvent *event;
@property (retain, nonatomic) ATXEventTravelTimeDataSource *dataSource;
@property (retain, nonatomic) CLPlacemark *destination;
@property (retain, nonatomic) NSString *transportType;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) NSDictionary *resolvedTimeInformation;

- (id)init;
- (void).cxx_destruct;
- (id)travelTimeToEvent:(id)a0 destination:(id)a1 transportType:(id)a2 heuristicDevice:(id)a3;

@end

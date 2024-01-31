@class NSString;
@protocol VKWalkAssistStatusDelegate;

@interface VKWalkAssistStatus : NSObject

@property (readonly, weak, nonatomic) id<VKWalkAssistStatusDelegate> delegate;
@property (retain, nonatomic) NSString *startRouteRoadName;
@property (nonatomic) double currentDistance;
@property (nonatomic) double lastCurrentDistance;
@property (nonatomic) BOOL isFacingStartLocation;
@property (nonatomic) BOOL isStationary;
@property (nonatomic) double arrivalRadius;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithArrivalRadius:(double)a0 delegate:(id)a1;
- (void)_makeStatusAnnouncement;
- (void)updateAssistStatusWithCurrentDistance:(double)a0 startRouteRoadName:(id)a1 isFacingStartLocation:(BOOL)a2 isStationary:(BOOL)a3;

@end

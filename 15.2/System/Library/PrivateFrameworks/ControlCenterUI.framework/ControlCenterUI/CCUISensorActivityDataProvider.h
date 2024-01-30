@class NSSet, CCUISensorActivityData;

@interface CCUISensorActivityDataProvider : NSObject

@property (retain, nonatomic) NSSet *activeSensorActivityData;
@property (copy, nonatomic) CCUISensorActivityData *mostRecentSensorActivityData;

- (void).cxx_destruct;

@end

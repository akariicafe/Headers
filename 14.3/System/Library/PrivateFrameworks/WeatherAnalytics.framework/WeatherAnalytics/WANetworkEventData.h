@class NSString, WANetworkEventType, WACellularRadioAccessTechnology, NSNumber;

@interface WANetworkEventData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *startTime;
@property (readonly, nonatomic) NSNumber *dnsDuration;
@property (readonly, nonatomic) NSNumber *connectDuration;
@property (readonly, nonatomic) NSNumber *requestDuration;
@property (readonly, nonatomic) NSNumber *responseDuration;
@property (readonly, nonatomic) NSNumber *responseSize;
@property (readonly, nonatomic) NSNumber *statusCode;
@property (readonly, nonatomic) NSNumber *errorCode;
@property (readonly, nonatomic) WANetworkEventType *eventType;
@property (readonly, nonatomic) WACellularRadioAccessTechnology *cellularRadioAccessTechnology;
@property (readonly, nonatomic) NSString *bundleIdentifier;

- (id)toDict;
- (void).cxx_destruct;
- (id)initWithStartTime:(id)a0 dnsDuration:(id)a1 connectDuration:(id)a2 requestDuration:(id)a3 responseDuration:(id)a4 responseSize:(id)a5 statusCode:(id)a6 errorCode:(id)a7 eventType:(id)a8 cellularRadioAccessTechnology:(id)a9 bundleIdentifier:(id)a10;

@end

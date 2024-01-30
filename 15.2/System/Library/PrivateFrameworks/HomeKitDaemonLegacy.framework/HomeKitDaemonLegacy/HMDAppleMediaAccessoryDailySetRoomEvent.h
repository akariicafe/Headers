@class NSString, NSDictionary;

@interface HMDAppleMediaAccessoryDailySetRoomEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSString *currentRoom;
@property (readonly, copy) NSString *previousRoom;

+ (id)filterToAllowedRoomName:(id)a0;

- (void).cxx_destruct;
- (id)initWithCurrentRoom:(id)a0 previousRoom:(id)a1;

@end

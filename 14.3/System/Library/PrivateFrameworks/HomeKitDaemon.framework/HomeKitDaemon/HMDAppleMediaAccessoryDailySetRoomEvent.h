@class NSString;

@interface HMDAppleMediaAccessoryDailySetRoomEvent : HMDLogEvent <HMDCoreAnalyticsLogging>

@property (readonly, copy) NSString *currentRoom;
@property (readonly, copy) NSString *previousRoom;

+ (id)uuid;
+ (id)filterToAllowedRoomName:(id)a0;

- (id)eventName;
- (void).cxx_destruct;
- (id)serializedEvent;
- (id)initWithCurrentRoom:(id)a0 previousRoom:(id)a1;

@end

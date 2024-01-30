@class NSArray, NSString, NSUUID;

@interface HMDRoomLogEvent : HMDLogEvent <HMDCoreDuetLogEvent>

@property (readonly) unsigned long long duetEventType;
@property (readonly, copy) NSArray *eventDataToLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long triggerSource;
@property (readonly, nonatomic) NSUUID *roomUUID;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *serializedIdentifier;
@property (readonly, copy, nonatomic) NSString *roomName;
@property (readonly, copy, nonatomic) NSString *viewInformation;

+ (id)uuid;

- (void).cxx_destruct;
- (id)metadata;
- (id)value;
- (id)initWithRoom:(id)a0 source:(unsigned long long)a1 viewInformation:(id)a2;
- (id)initWithRoomUUID:(id)a0 roomName:(id)a1 source:(unsigned long long)a2 serializedIdentifier:(id)a3 homeUUID:(id)a4 viewInformation:(id)a5;

@end

@class NSString, HMDAccessory;

@interface HMDAccessoryRelaySetupEvent : HMDLogEvent <HMDAWDLogEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HMDAccessory *hmdAccessory;
@property (readonly, nonatomic) unsigned long long actionType;

+ (void)initialize;
+ (id)uuid;
+ (id)stringForActionType:(unsigned long long)a0;
+ (id)relaySetupEventWithActionType:(unsigned long long)a0 hmdAccessory:(id)a1;

@end

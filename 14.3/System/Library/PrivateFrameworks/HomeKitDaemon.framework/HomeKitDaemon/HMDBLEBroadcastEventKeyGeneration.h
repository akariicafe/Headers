@class NSString, HMDAccessory;

@interface HMDBLEBroadcastEventKeyGeneration : HMDLogEvent <HMDAWDLogEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HMDAccessory *accessory;
@property (readonly, nonatomic) int reason;

+ (void)initialize;
+ (id)uuid;
+ (id)broadcastKeyGenerationEventForAccessory:(id)a0 reason:(int)a1;

@end

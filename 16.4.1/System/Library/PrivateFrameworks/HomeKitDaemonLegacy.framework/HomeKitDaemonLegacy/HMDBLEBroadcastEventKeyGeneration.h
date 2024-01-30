@class NSString, HMDAccessory;

@interface HMDBLEBroadcastEventKeyGeneration : HMMLogEvent <HMDAWDLogEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HMDAccessory *accessory;
@property (readonly, nonatomic) int reason;

+ (id)broadcastKeyGenerationEventForAccessory:(id)a0 reason:(int)a1;

@end

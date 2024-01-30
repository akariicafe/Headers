@class NSString, HMDAccessory;

@interface HMDBLEBroadcastEventReceived : HMMLogEvent <HMDAWDLogEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HMDAccessory *accessory;
@property (readonly, nonatomic) BOOL hasExpectedGSN;

+ (id)broadcastEventFromAccessory:(id)a0 withExpectedGSN:(BOOL)a1;

@end

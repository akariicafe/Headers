@class NSString, HMDHAPAccessory;

@interface HMDTargetControllerCommandEvent : HMMLogEvent <HMDAWDLogEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long commandType;
@property (readonly, weak, nonatomic) HMDHAPAccessory *accessory;

+ (id)commandEventWithCommandType:(unsigned long long)a0 accessory:(id)a1;

@end

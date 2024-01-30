@class NSString, AWDHomeKitUserPresenceCompute;

@interface HomeKitUserPresenceComputeEvent : HMMLogEvent <HMDAWDLogEvent>

@property (readonly, nonatomic) AWDHomeKitUserPresenceCompute *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

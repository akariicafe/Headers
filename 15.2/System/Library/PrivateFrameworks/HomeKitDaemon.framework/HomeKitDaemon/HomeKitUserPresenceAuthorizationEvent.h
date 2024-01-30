@class NSString, AWDHomeKitUserPresenceAuthorization;

@interface HomeKitUserPresenceAuthorizationEvent : HMMLogEvent <HMDAWDLogEvent>

@property (readonly, nonatomic) AWDHomeKitUserPresenceAuthorization *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

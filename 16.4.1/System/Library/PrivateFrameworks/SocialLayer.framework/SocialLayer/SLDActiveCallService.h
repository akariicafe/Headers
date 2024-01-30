@class NSString, UISSlotMachine;

@interface SLDActiveCallService : SLDRemoteRenderingService <SLDService, SLDActiveCallService>

@property (retain, nonatomic) UISSlotMachine *activeCallViewSlotMachine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remoteObjectProtocol;
+ (id)sharedService;

@end

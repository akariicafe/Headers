@class NSString, HKBackgroundObservationExtension;

@interface _HKBackgroundObservationExtensionRemoteContext : _HKBackgroundObservationExtensionContext <_HKBackgroundObservationExtensionRemoteXPCInterface>

@property (retain, nonatomic) HKBackgroundObservationExtension *extensionInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void)performCleanup;
- (void).cxx_destruct;
- (void)didReceiveUpdateForSampleType:(id)a0 completionHandler:(id /* block */)a1;
- (void)backgroundObservationExtensionTimeWillExpire;

@end

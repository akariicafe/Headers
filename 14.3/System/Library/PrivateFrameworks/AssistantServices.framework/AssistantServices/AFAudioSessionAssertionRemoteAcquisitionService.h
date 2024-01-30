@class NSString;

@interface AFAudioSessionAssertionRemoteAcquisitionService : NSObject <AFAudioSessionAssertionAcquisitionService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)acquireAudioSessionAssertionWithContext:(id)a0 relinquishmentHandler:(id /* block */)a1;

@end

@class NSString, AFInstanceContext;

@interface AFAudioSessionAssertionRemoteAcquisitionService : NSObject <AFAudioSessionAssertionAcquisitionService> {
    AFInstanceContext *_instanceContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInstanceContext:(id)a0;
- (id)acquireAudioSessionAssertionWithContext:(id)a0 relinquishmentHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end

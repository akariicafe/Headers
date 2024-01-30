@class NSString, _AFAudioPowerXPCSharedMemory, AFXPCWrapper;

@interface AFAudioPowerXPCProvider : NSObject <AFAudioPowerProviding> {
    AFXPCWrapper *_wrapper;
    _AFAudioPowerXPCSharedMemory *_sharedMemory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)getAveragePower:(float *)a0 andPeakPower:(float *)a1;
- (void)willBeginAccessPower;
- (void)didEndAccessPower;
- (id)initWithXPCWrapper:(id)a0;

@end

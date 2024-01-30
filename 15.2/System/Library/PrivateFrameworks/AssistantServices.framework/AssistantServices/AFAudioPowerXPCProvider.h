@class NSString, _AFAudioPowerXPCSharedMemory, AFXPCWrapper;

@interface AFAudioPowerXPCProvider : NSObject <AFAudioPowerProviding> {
    AFXPCWrapper *_wrapper;
    _AFAudioPowerXPCSharedMemory *_sharedMemory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willBeginAccessPower;
- (BOOL)getAveragePower:(float *)a0 andPeakPower:(float *)a1;
- (void)didEndAccessPower;
- (void).cxx_destruct;
- (id)initWithXPCWrapper:(id)a0;

@end

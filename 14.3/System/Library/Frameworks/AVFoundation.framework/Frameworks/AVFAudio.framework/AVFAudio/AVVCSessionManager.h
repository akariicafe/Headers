@interface AVVCSessionManager : NSObject {
    BOOL mShouldDuckOthers;
    BOOL mIsMiniDuckingEnabled;
    BOOL mShouldEnableMiniDucking;
    BOOL mShouldDisableMiniDucking;
    BOOL mSessionNeedsVolumeControl;
    BOOL mSessionNeedsRoutingControl;
    BOOL mSessionOutputIsWirelessSplitter;
    BOOL mIsOtherAudioPlaying;
    BOOL mRouteHasDoAPSupport;
    BOOL mOutputSupportsSWVolume;
    BOOL mDeviceIsIOSAccessory;
    BOOL mDeviceIsOlderWatch;
    unsigned int mSessionActivationOptions;
    long long mPreviousActivationMode;
}

- (int)enableSmartRoutingConsideration:(BOOL)a0;
- (id)init;
- (int)setupOneTimeSessionSettings;
- (int)setSessionActivationContext:(id)a0;
- (void)shouldEnableMiniDucking:(BOOL)a0;
- (BOOL)isMiniDuckingEnabled;
- (void)getHypotheticalRouteAndUpdateStates;
- (int)setSessionCategoryModeOptionsForActivationMode:(long long)a0;
- (int)setSessionAudioHWControlFlagsForActivationMode:(long long)a0;
- (int)setSessionSampleRateForActivationMode:(long long)a0;
- (int)setSessionBufferSize:(int)a0;
- (void)changeDuckOthersOption:(BOOL)a0;
- (BOOL)isSessionOutputInWirelessSplitterMode;
- (unsigned int)getSessionActivationOptions;
- (void)setSessionActivationOptions:(unsigned int)a0;
- (BOOL)isAirplayOneOfTheOutputRoutes:(id)a0;

@end

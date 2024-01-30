@protocol SBDeviceApplicationSceneStatusBarStateObserver;

@interface _SBDeviceApplicationSceneStatusBarStateProviderObserverRecord : NSObject {
    struct SBDeviceApplicationSceneStatusBarStateObserverFlags { unsigned char wantsDidChangeStatusBarStyleTo : 1; unsigned char wantsDidChangeStatusBarPartStylesTo : 1; unsigned char wantsDidChangeStatusBarAlphaTo : 1; unsigned char wantsDidChangeStatusBarHiddenTo_withAnimation : 1; unsigned char wantsDidChangeStatusBarOrientationTo : 1; unsigned char wantsDidInvalidateStatusBarDescriptionForSceneWithIdentifier : 1; unsigned char wantsDidChangeStatusBarStyleOverridesToSuppressTo : 1; unsigned char wantsDidChangeStatusBarAvoidanceFrameTo : 1; unsigned char wantsDidChangeSceneInterfaceOrientationTo : 1; } _flags;
    id<SBDeviceApplicationSceneStatusBarStateObserver> _observer;
}

- (void).cxx_destruct;

@end

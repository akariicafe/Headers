@class ATXMotionManagerWrapper, CARSessionStatus, CARAutomaticDNDStatus;

@interface ATXModeDrivingFeaturizerData : NSObject {
    CARSessionStatus *carPlayMonitor;
    CARAutomaticDNDStatus *autoDNDMonitor;
    int notificationTokens[5];
    ATXMotionManagerWrapper *motionManagerWrapper;
    BOOL isMotionTypeDriving;
}

- (void).cxx_destruct;

@end

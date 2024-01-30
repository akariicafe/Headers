@class NSString;
@protocol HAENotificationCenterDelegate, HAENotificationCenterUserDelegate;

@interface HAENotificationCenter : NSObject {
    id<HAENotificationCenterDelegate> centerDelegate;
}

@property (readonly, weak, nonatomic) id<HAENotificationCenterUserDelegate> delegate;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) double liveMonitorWindowInSec;
@property (readonly, nonatomic) double liveThresholdInDBA;

+ (BOOL)connectedWiredDeviceIsHeadphone;
+ (BOOL)connectedWiredDeviceIsHeadphoneWithUUID:(id)a0;
+ (void)startNotificationCenterServer;

- (id)addHAENotificationEvent:(id)a0 error:(id *)a1;
- (void)setDelegate:(id)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (void)addHAENotificationEvent:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end

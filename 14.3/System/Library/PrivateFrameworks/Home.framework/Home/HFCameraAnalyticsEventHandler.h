@interface HFCameraAnalyticsEventHandler : NSObject

+ (void)sendCameraClipPlayerDidUpdateEventWithError:(id)a0;
+ (void)sendEventNamed:(id)a0 payload:(id)a1;
+ (void)sendAssociatedAccessoriesDidLaunchEventWithCount:(id)a0;
+ (void)sendAssociatedAccessoriesDidModifyListEventWithPayload:(id)a0;

@end

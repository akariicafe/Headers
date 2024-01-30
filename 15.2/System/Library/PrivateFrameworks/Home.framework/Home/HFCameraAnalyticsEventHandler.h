@interface HFCameraAnalyticsEventHandler : NSObject

+ (id)sendCameraClipPlayerDidUpdateEventWithError:(id)a0;
+ (void)sendEventNamed:(id)a0 payload:(id)a1;
+ (id)sendDonationEventWithCameraClipCount:(unsigned long long)a0 processName:(id)a1 error:(id)a2;
+ (id)decoratedPayloadFor:(id)a0;
+ (id)sendAssociatedAccessoriesDidLaunchEventWithCount:(id)a0;
+ (id)sendAssociatedAccessoriesDidModifyListEventWithPayload:(id)a0;

@end

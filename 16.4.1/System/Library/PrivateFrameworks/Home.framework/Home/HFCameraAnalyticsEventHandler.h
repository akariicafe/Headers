@interface HFCameraAnalyticsEventHandler : NSObject

+ (id)sendAssociatedAccessoriesDidLaunchEventWithCount:(id)a0;
+ (id)sendAssociatedAccessoriesDidModifyListEventWithPayload:(id)a0;
+ (id)decoratedPayloadFor:(id)a0;
+ (id)sendCameraClipPlayerDidUpdateEventWithError:(id)a0;
+ (id)sendDonationEventWithCameraClipCount:(unsigned long long)a0 processName:(id)a1 error:(id)a2;
+ (void)sendEventNamed:(id)a0 payload:(id)a1;

@end

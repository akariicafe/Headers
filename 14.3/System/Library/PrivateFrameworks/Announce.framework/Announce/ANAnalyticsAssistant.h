@interface ANAnalyticsAssistant : NSObject <ANAnalyticsAssistantProtocol>

- (id)_playerForAnnouncement:(id)a0;
- (int)_linearBucketAtInterval:(double)a0 value:(double)a1 max:(double)a2;
- (struct ANAnalyticsAssistantAudioData { unsigned long long x0; double x1; })audioDataForAnnouncement:(id)a0;
- (struct ANAnalyticsAssistantSenderData { unsigned long long x0; int x1; unsigned long long x2; unsigned long long x3; })senderDataForAnnouncement:(id)a0;
- (long long)boundGroupCount:(long long)a0;
- (long long)bucketFromSize:(long long)a0;
- (long long)bucketFromDuration:(double)a0;
- (long long)bucketFromReceiveTime:(double)a0;

@end

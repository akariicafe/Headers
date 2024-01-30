@interface _UIKeyboardTypingSpeedLogger : NSObject {
    long long _typingDelaySamples[7];
    long long _typingDelaySampleCount;
}

- (id)init;
- (void)logToAggregate;
- (void)recordTypingDelay:(double)a0;

@end

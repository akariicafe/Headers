@interface _UIKeyboardTypingSpeedLogger : NSObject {
    long long _typingDelaySamples[7];
    long long _typingDelaySampleCount;
}

- (void)recordTypingDelay:(double)a0;
- (id)init;
- (void)logToAggregate;

@end

@class SGMBadInteractionIgnored;

@interface SGErrorMetrics : NSObject

@property (retain, nonatomic) SGMBadInteractionIgnored *badInteractionIgnored;

+ (void)recordInteractionIgnoredWithReason:(struct SGMInteractionIgnoredReason_ { unsigned long long x0; })a0;
+ (id)instance;

- (id)init;
- (void).cxx_destruct;

@end

@class _ATXDuetHelper;

@interface _ATXAppLaunchSequenceAWDTracker : NSObject {
    _ATXDuetHelper *_duetHelper;
    double _sessionGapSeconds;
    double _sameLaunchGapSeconds;
}

@property (readonly, nonatomic) unsigned long long maxLength;

+ (id)_randomlyClipSequence:(id)a0 maxLength:(unsigned long long)a1;
+ (id)_defaultLaunchSequenceTimestampPath;

- (void).cxx_destruct;
- (id)init;
- (id)_queryStartTime;
- (void)_writeTimestamp:(id)a0;
- (id)_readTimestamp;
- (id)initWithMaxLength:(unsigned long long)a0 sessionGapSeconds:(double)a1 sameLaunchGapSeconds:(double)a2 duetHelper:(id)a3;
- (void)postLaunchSequence:(id)a0;
- (void)_emitAndResetLaunchSequenceBuffer:(id)a0;
- (void)_addBundleId:(id)a0 buffer:(id)a1;
- (void)logSampledLaunchSequences;

@end

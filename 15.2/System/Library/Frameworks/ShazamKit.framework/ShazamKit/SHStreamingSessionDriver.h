@class SHSignature, NSString, SHSignatureMetrics, SHSignatureBuffer;
@protocol SHSessionDriverDelegate;

@interface SHStreamingSessionDriver : NSObject <SHMatcherDelegate>

@property (nonatomic) BOOL waiting;
@property (nonatomic) double currentRequiredDuration;
@property (nonatomic) double maximumSignatureDuration;
@property (nonatomic) double minimumSignatureDuration;
@property (retain, nonatomic) SHSignatureBuffer *signatureBuffer;
@property (retain, nonatomic) SHSignatureMetrics *metrics;
@property (weak, nonatomic) id<SHSessionDriverDelegate> sessionDelegate;
@property (readonly, nonatomic) SHSignature *matchingSignature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)match;
- (void).cxx_destruct;
- (BOOL)isCurrentSignature:(id)a0;
- (double)clampTimeInterval:(double)a0;
- (void)startResetTimerForIntermission:(double)a0 requiredSignatureDuration:(double)a1;
- (void)matcher:(id)a0 didFindMatch:(id)a1;
- (void)matcher:(id)a0 didNotFindMatch:(id)a1;
- (void)matcher:(id)a0 didFail:(id)a1;
- (void)matcher:(id)a0 didFinishWithOutcome:(long long)a1;
- (id)initWithMinimumSignatureDuration:(double)a0 maximumSignatureDuration:(double)a1;
- (void)flow:(id)a0 time:(id)a1;

@end

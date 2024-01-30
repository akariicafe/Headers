@class SHSignature, NSString, SHSignatureMetrics, SHSignatureBuffer;
@protocol SHSessionDriverDelegate;

@interface SHStreamingSessionDriver : NSObject <SHSessionDriver>

@property (nonatomic) BOOL waiting;
@property (nonatomic) double currentRequiredLength;
@property (nonatomic) double maximumSignatureLength;
@property (nonatomic) double minimumSignatureLength;
@property (retain, nonatomic) SHSignatureBuffer *signatureBuffer;
@property (retain, nonatomic) SHSignatureMetrics *metrics;
@property (weak, nonatomic) id<SHSessionDriverDelegate> sessionDelegate;
@property (readonly, nonatomic) SHSignature *matchingSignature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)match;
- (void)flow:(id)a0 time:(id)a1;
- (BOOL)isCurrentSignature:(id)a0;
- (double)clampTimeInterval:(double)a0;
- (void)startResetTimerForIntermission:(double)a0 requiredSignatureLength:(double)a1;
- (void)matcher:(id)a0 didFindMatchingResponse:(id)a1;
- (void)matcher:(id)a0 didNotFindMatchForSignature:(id)a1 matcherResponse:(id)a2;
- (void)matcher:(id)a0 didFailForSignature:(id)a1 matcherResponse:(id)a2 withError:(id)a3;
- (void)didFinishForMatcher:(id)a0;
- (id)initWithMinimumSignatureLength:(double)a0 maximumSignatureLength:(double)a1;

@end

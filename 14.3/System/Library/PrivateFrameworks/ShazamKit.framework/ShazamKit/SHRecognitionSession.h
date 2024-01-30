@class SHStore;
@protocol SHSessionDelegate;

@interface SHRecognitionSession : SHSession

@property (weak, nonatomic) id<SHSessionDelegate> delegate;
@property (readonly, nonatomic) SHStore *configuration;

- (void).cxx_destruct;
- (void)match:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void)matcher:(id)a0 didNotFindMatchForSignature:(id)a1 matcherResponse:(id)a2;
- (void)matcher:(id)a0 didFailForSignature:(id)a1 matcherResponse:(id)a2 withError:(id)a3;
- (void)flow:(id)a0 atTime:(id)a1;

@end

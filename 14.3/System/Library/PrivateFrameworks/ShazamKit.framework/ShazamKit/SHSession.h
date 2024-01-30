@class SHStore, NSString;
@protocol SHMatcher, SHSessionDriver, SHSessionDelegate;

@interface SHSession : NSObject <SHMatcherDelegate, SHSessionDriverDelegate>

@property (retain, nonatomic) id<SHMatcher> matcher;
@property (retain, nonatomic) id<SHSessionDriver> sessionDriver;
@property (readonly, nonatomic) SHStore *store;
@property (weak, nonatomic) id<SHSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStore:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)configuration;
- (void)matchSignature:(id)a0;
- (void)matcher:(id)a0 didFindMatchingResponse:(id)a1;
- (void)matcher:(id)a0 didNotFindMatchForSignature:(id)a1 matcherResponse:(id)a2;
- (void)matcher:(id)a0 didFailForSignature:(id)a1 matcherResponse:(id)a2 withError:(id)a3;
- (void)didFinishForMatcher:(id)a0;
- (id)matcherForStore:(id)a0;
- (id)initWithStore:(id)a0 matcher:(id)a1;
- (BOOL)isSessionDriverSignature:(id)a0;
- (void)matchStreamingBuffer:(id)a0 atTime:(id)a1;

@end

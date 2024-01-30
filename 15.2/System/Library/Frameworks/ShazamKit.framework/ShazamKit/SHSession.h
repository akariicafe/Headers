@class SHStreamingSessionDriver, SHCatalog, NSString;
@protocol SHMatcher, SHSessionDelegate;

@interface SHSession : NSObject <SHMatcherDelegate, SHSessionDriverDelegate>

@property (retain, nonatomic) id<SHMatcher> matcher;
@property (readonly, nonatomic) SHStreamingSessionDriver *sessionDriver;
@property (readonly, nonatomic) SHCatalog *catalog;
@property (weak, nonatomic) id<SHSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)matchSignature:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCatalog:(id)a0;
- (void)matcher:(id)a0 didFindMatch:(id)a1;
- (void)matcher:(id)a0 didNotFindMatch:(id)a1;
- (void)matcher:(id)a0 didFail:(id)a1;
- (void)matcher:(id)a0 didFinishWithOutcome:(long long)a1;
- (id)matcherForCatalog:(id)a0;
- (id)initWithCatalog:(id)a0 matcher:(id)a1;
- (BOOL)_isSessionDriverSignature:(id)a0;
- (void)matchStreamingBuffer:(id)a0 atTime:(id)a1;

@end

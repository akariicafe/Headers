@class SHCatalog, NSString, NSObject;
@protocol OS_dispatch_queue, SHSessionDelegate, SHMatcher, SHSessionDriver;

@interface SHSession : NSObject <SHMatcherDelegate, SHSessionDriverDelegate>

@property (readonly, nonatomic) id<SHMatcher> matcher;
@property (readonly, nonatomic) id<SHSessionDriver> sessionDriver;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (readonly, nonatomic) SHCatalog *catalog;
@property (weak, nonatomic) id<SHSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)matchSignature:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)matchStreamingBuffer:(id)a0 atTime:(id)a1;
- (void)handleCommonActionsForResponse:(id)a0;
- (BOOL)_isSessionDriverSignature:(id)a0;
- (id)initWithCatalog:(id)a0;
- (id)initWithCatalog:(id)a0 matcher:(id)a1 sessionDriver:(id)a2;
- (void)matcher:(id)a0 didProduceResponse:(id)a1;
- (void)sessionDriverEncounteredUnrecoverableError:(id)a0 forSignature:(id)a1;
- (BOOL)validateSignature:(id)a0 error:(id *)a1;

@end

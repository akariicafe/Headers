@class NSMutableIndexSet, NSDate, PKAssertion, NSObject;
@protocol OS_dispatch_queue;

@interface PKAutomaticPassPresentationSuppressor : NSObject {
    PKAssertion *_suppressionAssertion;
    NSMutableIndexSet *_suppressionRequestTokens;
    NSMutableIndexSet *_backgrounedSuppressionIdentifiers;
    NSDate *_backgroundedDate;
    unsigned long long _nextRequestToken;
    NSObject<OS_dispatch_queue> *_suppressorQueue;
}

@property (readonly, nonatomic) BOOL isSuppressing;

+ (id)sharedInstance;

- (void)_applicationWillEnterForeground:(id)a0;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)endSuppressionWithRequestToken:(unsigned long long)a0;
- (void)_acquireSuppressionAssertionIfNeededWithCompletion:(id /* block */)a0;
- (void)_acquireSuppressionAssertionWithCompletion:(id /* block */)a0;
- (unsigned long long)requestSuppressionWithResponseHandler:(id /* block */)a0;

@end

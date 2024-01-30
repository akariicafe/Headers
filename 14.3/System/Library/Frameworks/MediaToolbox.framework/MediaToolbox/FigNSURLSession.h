@class NSURLSession, NSString, NSOperationQueue, NSURLSessionConfiguration, NSObject;
@protocol NSURLSessionDataDelegate, OS_dispatch_queue;

@interface FigNSURLSession : NSObject {
    NSURLSessionConfiguration *_configuration;
    struct OpaqueFigCFWeakReferenceHolder { } *_weakAssertion;
}

@property (readonly, nonatomic) NSURLSession *session;
@property (readonly, nonatomic) id<NSURLSessionDataDelegate> dataDelegate;
@property (readonly, nonatomic) NSOperationQueue *opQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) NSString *clientBundleIdentifier;
@property (nonatomic) long long doomTime;
@property (nonatomic) BOOL doomCheckScheduled;
@property (nonatomic) int assertionCount;

- (void)dealloc;
- (void)debug;
- (struct FigOpaqueAssertion { } *)acquireAssertion;
- (id)initWithClientBundleIdentifier:(id)a0 dispatchQueue:(id)a1;

@end

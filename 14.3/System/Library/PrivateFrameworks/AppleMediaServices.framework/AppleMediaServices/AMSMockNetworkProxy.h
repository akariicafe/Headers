@class NSArray, NSMutableArray, AMSMockURLOverride;

@interface AMSMockNetworkProxy : NSURLProtocol

@property (class, readonly, nonatomic) NSMutableArray *_executedOverrides;
@property (class, readonly, nonatomic) NSArray *registeredOverrides;
@property (class, readonly, nonatomic) NSArray *executedOverrides;

@property (retain, nonatomic) AMSMockURLOverride *currentOverride;

+ (void)_sync:(id /* block */)a0;
+ (id)canonicalRequestForRequest:(id)a0;
+ (id)_overrides;
+ (void)addOverride:(id)a0;
+ (void)_removeOverride:(id)a0;
+ (void)removeOverride:(id)a0;
+ (void)_removeAllOverrides;
+ (BOOL)canInitWithRequest:(id)a0;
+ (void)clearOverrides;

- (void)startLoading;
- (void)sendResponse:(id)a0;
- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)finishWithData:(id)a0;
- (void)performRedirectFromResponse:(id)a0;

@end

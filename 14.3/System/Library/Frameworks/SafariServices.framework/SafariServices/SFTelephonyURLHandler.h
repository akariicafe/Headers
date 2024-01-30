@class NSMutableSet;

@interface SFTelephonyURLHandler : NSObject

@property (retain, nonatomic) NSMutableSet *pendingRequests;

+ (id)sharedInstance;

- (id)init;
- (void)addObserverForRequest:(id)a0;
- (void)removeObserverForRequest:(id)a0;
- (void).cxx_destruct;
- (BOOL)openURLForDialRequest:(id)a0 withScene:(id)a1 completionHandler:(id /* block */)a2;

@end

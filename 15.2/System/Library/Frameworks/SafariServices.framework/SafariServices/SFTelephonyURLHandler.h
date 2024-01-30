@class NSMutableSet;

@interface SFTelephonyURLHandler : NSObject

@property (retain, nonatomic) NSMutableSet *pendingRequests;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (BOOL)openURLForDialRequest:(id)a0 withScene:(id)a1 completionHandler:(id /* block */)a2;
- (void)addObserverForRequest:(id)a0;
- (void)removeObserverForRequest:(id)a0;

@end

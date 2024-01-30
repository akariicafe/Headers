@class NSMutableSet;

@interface SFTelephonyURLHandler : NSObject

@property (retain, nonatomic) NSMutableSet *pendingRequests;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)addObserverForRequest:(id)a0;
- (BOOL)openURLForDialRequest:(id)a0 withScene:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeObserverForRequest:(id)a0;

@end

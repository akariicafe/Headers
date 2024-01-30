@class CATAddress;
@protocol CATNetworkReachabilityDelegate;

@interface CATNetworkReachability : NSObject {
    struct __SCNetworkReachability { } *mReachabilityRef;
}

@property (nonatomic) unsigned int flags;
@property (readonly, nonatomic) CATAddress *address;
@property (weak, nonatomic) id<CATNetworkReachabilityDelegate> delegate;
@property (readonly, nonatomic, getter=isReachable) BOOL reachable;

+ (id)reachabilityWithAddress:(id)a0;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;
+ (BOOL)isReachableForLocalWiFiWithFlags:(unsigned int)a0;
+ (BOOL)isReachableForNetworkWithFlags:(unsigned int)a0;
+ (id)keyPathsForValuesAffectingReachable;

- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void).cxx_destruct;
- (id)initWithAddress:(id)a0;
- (void)dealloc;
- (id)debugDescription;
- (void)delegateDidChange;
- (void)configureCallback;
- (void)reachabilityDidChangeWithFlags:(unsigned int)a0;

@end

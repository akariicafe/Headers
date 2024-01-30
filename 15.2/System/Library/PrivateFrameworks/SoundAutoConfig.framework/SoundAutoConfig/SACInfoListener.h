@class NSString, NSXPCConnection;
@protocol SACInfoDelegate, SACServiceDelegate;

@interface SACInfoListener : NSObject <SACServiceInfoDelegate> {
    NSXPCConnection *mServiceConnection;
    id<SACServiceDelegate> mProxyInterface;
    unsigned long long mVerbosity;
}

@property (retain, nonatomic) id<SACInfoDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)startServiceConnection;
- (void)handleServiceCrash;
- (void)handleSACInfo:(id)a0;
- (void)setListenerVerbosity:(unsigned long long)a0;

@end

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

- (id)init;
- (void).cxx_destruct;
- (void)handleSACInfo:(id)a0;
- (void)handleServiceCrash;
- (void)setListenerVerbosity:(unsigned long long)a0;
- (void)startServiceConnection;

@end

@class NSString, NSXPCConnection;
@protocol SACServiceDelegate, SACServiceSYSDelegate, SACSYSDelegate;

@interface SACSYSController : NSObject <SACServiceSYSDelegate> {
    NSXPCConnection *mServiceConnection;
    id<SACServiceDelegate> mProxyInterface;
    id<SACServiceSYSDelegate> mSACSYSDelegate;
}

@property (nonatomic) id<SACSYSDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)startServiceConnection;
- (void)handleServiceCrash;
- (void)setSYSConfig:(id)a0;

@end

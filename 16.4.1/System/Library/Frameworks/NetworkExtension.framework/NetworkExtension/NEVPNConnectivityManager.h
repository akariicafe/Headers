@class NSArray, NEConfigurationManager, NSObject;
@protocol OS_dispatch_queue, NEVPNConnectivityManagerDelegate;

@interface NEVPNConnectivityManager : NSObject <NEVPNConnectivitySessionDelegate> {
    NEConfigurationManager *_configManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_sessions;
}

@property (nonatomic) unsigned long long visibilityStyle;
@property (nonatomic) unsigned long long connectivityState;
@property (weak) id<NEVPNConnectivityManagerDelegate> delegate;

- (id)toggleVPNConnectivity:(BOOL)a0;
- (void)sessionStatusDidChange:(id)a0;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;

@end

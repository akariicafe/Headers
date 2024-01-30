@class NSXPCConnection;
@protocol SBSConnectionDelegate;

@interface SBSSettingsInterface : NSObject {
    NSXPCConnection *_sbConnection;
    id<SBSConnectionDelegate> _connectionDelegate;
}

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)homeKitSettingForKeyPathChanged:(id)a0 updatedValue:(id)a1 completion:(id /* block */)a2;
- (void)deviceAttributeChanged:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)handleConnectionInterrupted;
- (void)handleConnectionInvalidated;

@end

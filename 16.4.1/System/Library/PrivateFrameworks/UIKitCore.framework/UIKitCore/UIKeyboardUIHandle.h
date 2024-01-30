@class UIKeyboardUIService, BSServiceConnection;
@protocol BSServiceConnectionHost;

@interface UIKeyboardUIHandle : NSObject <UIKeyboardUIServiceProtocol> {
    BSServiceConnection<BSServiceConnectionHost> *_connection;
    UIKeyboardUIService *_service;
}

- (void).cxx_destruct;
- (id)initWithService:(id)a0 connection:(id)a1;
- (void)setKeyboardAlpha:(id)a0;
- (id)snapshotForOptions:(id)a0;
- (id)snapshotForView:(id)a0;

@end

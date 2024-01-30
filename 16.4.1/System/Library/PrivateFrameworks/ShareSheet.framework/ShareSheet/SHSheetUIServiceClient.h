@class SHSheetUIServiceClientContext, NSString, BSServiceConnection;
@protocol SHSheetContentPresenter;

@interface SHSheetUIServiceClient : NSObject

@property (readonly, nonatomic) BSServiceConnection *connection;
@property (nonatomic) long long state;
@property (nonatomic) long long pendingRequest;
@property (retain, nonatomic) SHSheetUIServiceClientContext *currentContext;
@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, weak, nonatomic) id<SHSheetContentPresenter> presenter;

- (void)connect;
- (BOOL)isConnected;
- (void)_didInvalidateConnection;
- (void)invalidate;
- (void)_reconnect;
- (void).cxx_destruct;
- (void)_activateConnection;
- (void)_didActivateConnection;
- (void)_setupNewConnection;
- (id)initWithSessionIdentifier:(id)a0 presenter:(id)a1;
- (id)sessionServer;
- (void)updateWithContext:(id)a0;

@end

@class NSString, NSURL, BSServiceConnection;
@protocol BSServiceConnectionHost, CXServiceClientDelegate;

@interface CXServiceClient : NSObject

@property (readonly, nonatomic) long long backgroundModeOptions;
@property (readonly, nonatomic) BSServiceConnection<BSServiceConnectionHost> *connection;
@property (weak, nonatomic) id<CXServiceClientDelegate> delegate;
@property (readonly, nonatomic) struct { unsigned int x0[8]; } auditToken;
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSURL *bundleURL;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, nonatomic, getter=isPermittedToUseBluetoothAccessories) BOOL permittedToUseBluetoothAccessories;
@property (readonly, nonatomic, getter=isPermittedToUsePrivateAPI) BOOL permittedToUsePrivateAPI;
@property (readonly, nonatomic, getter=isPermittedToUsePublicAPI) BOOL permittedToUsePublicAPI;
@property (readonly, nonatomic) int processIdentifier;

- (id)initWithConnection:(id)a0;
- (id)description;
- (void)invalidate;
- (void).cxx_destruct;

@end

@class URTAlert, BSServiceConnection;

@interface URTAlertConnection : NSObject

@property (readonly, nonatomic) BSServiceConnection *connection;
@property (retain, nonatomic) URTAlert *alert;

- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;

@end

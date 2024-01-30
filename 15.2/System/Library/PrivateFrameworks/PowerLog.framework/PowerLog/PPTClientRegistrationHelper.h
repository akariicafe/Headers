@class NSXPCConnection;

@interface PPTClientRegistrationHelper : NSObject

@property (retain, nonatomic) NSXPCConnection *connectionToServer;

- (void).cxx_destruct;
- (id)createXPCConnection;
- (void)closeXPCConnection;
- (BOOL)permissionsForSubsystem:(id)a0 category:(id)a1;

@end

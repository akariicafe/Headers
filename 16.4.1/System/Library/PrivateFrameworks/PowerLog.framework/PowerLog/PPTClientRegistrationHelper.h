@class NSXPCConnection;

@interface PPTClientRegistrationHelper : NSObject

@property (retain, nonatomic) NSXPCConnection *connectionToServer;

- (id)createXPCConnection;
- (BOOL)permissionsForSubsystem:(id)a0 category:(id)a1;
- (void)closeXPCConnection;
- (void).cxx_destruct;

@end

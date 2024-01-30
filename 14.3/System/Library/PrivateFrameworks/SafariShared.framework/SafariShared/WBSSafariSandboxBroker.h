@class NSObject;
@protocol OS_os_log;

@interface WBSSafariSandboxBroker : NSObject <WBSSafariSandboxBrokerProtocol>

@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) struct { unsigned int val[8]; } auditToken;

- (void).cxx_destruct;
- (id)initWithPID:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1;

@end

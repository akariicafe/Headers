@class NSXPCConnection, NSObject;
@protocol OS_os_log;

@interface DASDelegate : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSXPCConnection *connectionToService;

- (void)connect;
- (void)disconnect;
- (id)init;
- (void).cxx_destruct;
- (void)appLaunchResumeInfoWithStartDate:(id)a0 withEndDate:(id)a1 withReply:(id /* block */)a2;

@end

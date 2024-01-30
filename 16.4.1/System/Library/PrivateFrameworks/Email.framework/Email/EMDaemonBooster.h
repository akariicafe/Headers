@class NSString, NSProgress, EMRemoteConnection, NSObject;
@protocol OS_os_log;

@interface EMDaemonBooster : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) EMRemoteConnection *connection;
@property (copy, nonatomic) NSString *loggingDescription;
@property (retain, nonatomic) NSProgress *remoteBoost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

@class NSObject;
@protocol OS_os_log;

@interface CUTLog : NSObject

@property (class, readonly) NSObject<OS_os_log> *fileCopier;
@property (class, readonly) NSObject<OS_os_log> *power;
@property (class, readonly) NSObject<OS_os_log> *network;
@property (class, readonly) NSObject<OS_os_log> *weakLink;
@property (class, readonly) NSObject<OS_os_log> *xpc;
@property (class, readonly) NSObject<OS_os_log> *checkpointTraceThread;
@property (class, readonly) NSObject<OS_os_log> *checkpointTraceProcess;
@property (class, readonly) NSObject<OS_os_log> *checkpointTraceSystem;
@property (class, readonly) NSObject<OS_os_log> *utilities;

@end

@class NSObject;
@protocol OS_os_log;

@interface APSLog : NSObject

@property (class, readonly) NSObject<OS_os_log> *telemetry;
@property (class, readonly) NSObject<OS_os_log> *topicManager;
@property (class, readonly) NSObject<OS_os_log> *topicManagerOversized;
@property (class, readonly) NSObject<OS_os_log> *daemon;
@property (class, readonly) NSObject<OS_os_log> *pushHistory;
@property (class, readonly) NSObject<OS_os_log> *database;
@property (class, readonly) NSObject<OS_os_log> *connection;
@property (class, readonly) NSObject<OS_os_log> *xpc;
@property (class, readonly) NSObject<OS_os_log> *certificate;
@property (class, readonly) NSObject<OS_os_log> *networking;
@property (class, readonly) NSObject<OS_os_log> *nonce;
@property (class, readonly) NSObject<OS_os_log> *alert;
@property (class, readonly) NSObject<OS_os_log> *stream;
@property (class, readonly) NSObject<OS_os_log> *courier;
@property (class, readonly) NSObject<OS_os_log> *courierOversized;
@property (class, readonly) NSObject<OS_os_log> *preference;
@property (class, readonly) NSObject<OS_os_log> *main;
@property (class, readonly) NSObject<OS_os_log> *connectionServer;
@property (class, readonly) NSObject<OS_os_log> *taskManager;
@property (class, readonly) NSObject<OS_os_log> *ttlCollection;
@property (class, readonly) NSObject<OS_os_log> *pubSub;
@property (class, readonly) NSObject<OS_os_log> *PUSHTRACE;
@property (class, readonly) NSObject<OS_os_log> *simulator;
@property (class, readonly) NSObject<OS_os_log> *activityTracking;

+ (BOOL)shouldPowerLogEvent:(id)a0;

@end

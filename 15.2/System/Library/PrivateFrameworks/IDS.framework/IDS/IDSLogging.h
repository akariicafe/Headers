@class NSObject;
@protocol OS_os_log;

@interface IDSLogging : NSObject

@property (class, readonly) NSObject<OS_os_log> *general;
@property (class, readonly) NSObject<OS_os_log> *transactionLog;
@property (class, readonly) NSObject<OS_os_log> *DaemonController;
@property (class, readonly) NSObject<OS_os_log> *DaemonListener;
@property (class, readonly) NSObject<OS_os_log> *_IDSService;
@property (class, readonly) NSObject<OS_os_log> *IDSService;
@property (class, readonly) NSObject<OS_os_log> *IDSConnection;
@property (class, readonly) NSObject<OS_os_log> *IDSConnection_oversize;
@property (class, readonly) NSObject<OS_os_log> *IDSDirectMessagingConnection;
@property (class, readonly) NSObject<OS_os_log> *Connection;
@property (class, readonly) NSObject<OS_os_log> *continuity;
@property (class, readonly) NSObject<OS_os_log> *IDSSession;
@property (class, readonly) NSObject<OS_os_log> *CFS;
@property (class, readonly) NSObject<OS_os_log> *_IDSGroupSession;
@property (class, readonly) NSObject<OS_os_log> *_IDSGroupSession_oversize;
@property (class, readonly) NSObject<OS_os_log> *DaemonProxy;
@property (class, readonly) NSObject<OS_os_log> *GUIDTRACE;
@property (class, readonly) NSObject<OS_os_log> *Accounts;
@property (class, readonly) NSObject<OS_os_log> *IDSAccountController;
@property (class, readonly) NSObject<OS_os_log> *IDSDevice;
@property (class, readonly) NSObject<OS_os_log> *IDSDeviceConnection;
@property (class, readonly) NSObject<OS_os_log> *IDSDataChannels;
@property (class, readonly) NSObject<OS_os_log> *ServiceAvailability;
@property (class, readonly) NSObject<OS_os_log> *IDSRealTimeEncryptionProxy;
@property (class, readonly) NSObject<OS_os_log> *IDSiCloudSignInHack;
@property (class, readonly) NSObject<OS_os_log> *IDQuery;
@property (class, readonly) NSObject<OS_os_log> *_IDSSession;

@end

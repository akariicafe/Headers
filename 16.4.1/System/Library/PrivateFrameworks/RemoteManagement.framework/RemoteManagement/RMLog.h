@class NSObject;
@protocol OS_os_log;

@interface RMLog : NSObject

@property (class, readonly) NSObject<OS_os_log> *nsdata_rm;
@property (class, readonly) NSObject<OS_os_log> *nsdictionary_rm;
@property (class, readonly) NSObject<OS_os_log> *accountHelper;
@property (class, readonly) NSObject<OS_os_log> *debounceTimer;
@property (class, readonly) NSObject<OS_os_log> *device;
@property (class, readonly) NSObject<OS_os_log> *enrollmentController;
@property (class, readonly) NSObject<OS_os_log> *jsonUtilities;
@property (class, readonly) NSObject<OS_os_log> *locations;
@property (class, readonly) NSObject<OS_os_log> *mdmHelper;
@property (class, readonly) NSObject<OS_os_log> *profilesController;
@property (class, readonly) NSObject<OS_os_log> *sandbox;
@property (class, readonly) NSObject<OS_os_log> *sharedLock;
@property (class, readonly) NSObject<OS_os_log> *timeddispatch;
@property (class, readonly) NSObject<OS_os_log> *xpcNotifications;

@end

@class NSObject;
@protocol OS_os_log;

@interface RMLog : NSObject

@property (class, readonly) NSObject<OS_os_log> *accountHelper;
@property (class, readonly) NSObject<OS_os_log> *debouncetimer;
@property (class, readonly) NSObject<OS_os_log> *enrollmentController;
@property (class, readonly) NSObject<OS_os_log> *locations;
@property (class, readonly) NSObject<OS_os_log> *mdmHelper;
@property (class, readonly) NSObject<OS_os_log> *personaHelper;
@property (class, readonly) NSObject<OS_os_log> *profilesController;
@property (class, readonly) NSObject<OS_os_log> *timeddispatch;

@end

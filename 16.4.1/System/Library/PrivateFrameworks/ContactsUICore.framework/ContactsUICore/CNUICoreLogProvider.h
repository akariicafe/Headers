@class NSObject;
@protocol OS_os_log;

@interface CNUICoreLogProvider : NSObject

@property (class, readonly) NSObject<OS_os_log> *actions_os_log;
@property (class, readonly) NSObject<OS_os_log> *likenesses_os_log;
@property (class, readonly) NSObject<OS_os_log> *corerecents_os_log;
@property (class, readonly) NSObject<OS_os_log> *static_identity_os_log;

@end

@class NSObject;
@protocol OS_os_log;

@interface MOLogger : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *effective;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *store;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *subscription;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *xpc;

@end

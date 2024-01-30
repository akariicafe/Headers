@class NSObject;
@protocol OS_os_log;

@interface FBKLog : NSObject

@property (class, readonly) NSObject<OS_os_log> *ffu;
@property (class, readonly) NSObject<OS_os_log> *appHandle;
@property (class, readonly) NSObject<OS_os_log> *reachability;
@property (class, readonly) NSObject<OS_os_log> *clientHandle;
@property (class, readonly) NSObject<OS_os_log> *attachHandle;
@property (class, readonly) NSObject<OS_os_log> *ded;
@property (class, readonly) NSObject<OS_os_log> *net;
@property (class, readonly) NSObject<OS_os_log> *model;
@property (class, readonly) NSObject<OS_os_log> *upload;
@property (class, readonly) NSObject<OS_os_log> *data;
@property (class, readonly) NSObject<OS_os_log> *sp2;

+ (id)currentURLActionActivity;
+ (id)newURLActionActivity;

@end

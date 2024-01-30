@class NSObject;
@protocol OS_os_log;

@interface ENLog : NSObject

@property (class, readonly) NSObject<OS_os_log> *groupContext;
@property (class, readonly) NSObject<OS_os_log> *groupContextCache;
@property (class, readonly) NSObject<OS_os_log> *groupContextDataSource;
@property (class, readonly) NSObject<OS_os_log> *utilities;
@property (class, readonly) NSObject<OS_os_log> *groupID;

@end

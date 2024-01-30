@class NSObject;
@protocol OS_os_log;

@interface BAGLog : NSObject

@property (class, readonly) NSObject<OS_os_log> *resourceVending;

@end

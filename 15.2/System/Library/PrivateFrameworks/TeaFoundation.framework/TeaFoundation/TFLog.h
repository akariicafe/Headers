@class NSObject;
@protocol OS_os_log;

@interface TFLog : NSObject

@property (class, readonly) NSObject<OS_os_log> *container;

@end

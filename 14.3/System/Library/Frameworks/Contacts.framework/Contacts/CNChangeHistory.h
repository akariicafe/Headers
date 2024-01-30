@class NSObject;
@protocol OS_os_log;

@interface CNChangeHistory : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *os_log;

@end

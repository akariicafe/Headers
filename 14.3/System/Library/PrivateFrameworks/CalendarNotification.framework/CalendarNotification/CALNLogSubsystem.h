@class NSObject;
@protocol OS_os_log;

@interface CALNLogSubsystem : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *defaultCategory;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *calendar;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *alarmEngine;

@end

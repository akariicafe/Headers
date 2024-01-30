@class NSObject;
@protocol OS_os_log;

@interface REMSignpost : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *database;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *sync;

@end

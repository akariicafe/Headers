@class NSObject;
@protocol OS_os_log;

@interface DSLogging : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *dsLogger;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end

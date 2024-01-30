@class NSObject;
@protocol OS_os_log;

@interface DSLogging : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *dsLogger;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;

@end

@class NSObject;
@protocol OS_os_log;

@interface CHLogger : NSObject

@property (readonly, nonatomic) NSObject<OS_os_log> *logHandle;

- (id)initWithDomain:(const char *)a0;
- (void).cxx_destruct;

@end

@class NSString, NSObject;
@protocol OS_os_log;

@interface SYTransportLog : NSObject {
    NSObject<OS_os_log> *_log;
}

@property (copy, nonatomic) NSString *facility;
@property (readonly, nonatomic) NSObject<OS_os_log> *oslog;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)logMessage:(id)a0;
- (void)_createLog;
- (void)logMessage:(id)a0 args:(char *)a1;
- (void)_logOSMessage:(const char *)a0 args:(char *)a1 returnAddress:(void *)a2;

@end

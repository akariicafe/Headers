@class NSObject;
@protocol OS_os_log;

@interface Logger : NSObject {
    NSObject<OS_os_log> *_logger;
}

+ (id)loggerWithCategory:(id)a0;
+ (id)loggerWithCategory:(id)a0 instance:(id)a1;

- (void).cxx_destruct;
- (id)getLogger;
- (id)initWithCategory:(id)a0 instance:(id)a1;

@end

@class NSObject;
@protocol OS_os_log;

@interface Logger : NSObject {
    NSObject<OS_os_log> *_logger;
}

+ (id)loggerWithCategory:(id)a0;
+ (id)loggerWithCategory:(id)a0 instance:(id)a1;

- (id)initWithCategory:(id)a0 instance:(id)a1;
- (id)getLogger;
- (void).cxx_destruct;

@end

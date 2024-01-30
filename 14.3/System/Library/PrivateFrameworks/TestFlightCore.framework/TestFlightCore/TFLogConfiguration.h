@class NSString, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface TFLogConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *subsystem;
@property (readonly, copy, nonatomic) NSString *category;
@property (retain, nonatomic) NSObject<OS_os_log> *internalLogger;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalLoggerAccessQueue;
@property (readonly, nonatomic) NSObject<OS_os_log> *generatedLogger;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (id)initWithSubsystem:(id)a0 category:(id)a1;

@end

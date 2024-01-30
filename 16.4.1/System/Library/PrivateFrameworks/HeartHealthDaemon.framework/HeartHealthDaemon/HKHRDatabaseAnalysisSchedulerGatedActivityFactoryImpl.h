@class NSString, NSObject;
@protocol OS_os_log;

@interface HKHRDatabaseAnalysisSchedulerGatedActivityFactoryImpl : NSObject <HKHRDatabaseAnalysisSchedulerGatedActivityFactory> {
    NSString *_identifier;
    NSObject<OS_os_log> *_loggingCategory;
}

- (id)makeGatedActivityWithHandler:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 loggingCategory:(id)a1;
- (void).cxx_destruct;

@end

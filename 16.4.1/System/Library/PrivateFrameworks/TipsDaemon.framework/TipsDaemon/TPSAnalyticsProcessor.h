@class NSString, TPSDuetDataProvider, NSDate, TPSAnalyticsEventController;
@protocol TPSAnalyticsProcessorDataSource;

@interface TPSAnalyticsProcessor : NSObject <TPSAnalyticsProcessing> {
    TPSAnalyticsEventController *_analyticsEventController;
    TPSDuetDataProvider *_duetDataProvider;
    NSString *_dateLastRunKey;
}

@property (readonly, nonatomic) TPSDuetDataProvider *duetDataProvider;
@property (weak, nonatomic) id<TPSAnalyticsProcessorDataSource> dataSource;
@property (retain, nonatomic) NSDate *dateLastRun;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)saveValue:(id)a0 forKey:(id)a1;
+ (id)loadValueForKey:(id)a0 class:(Class)a1;

- (id)init;
- (void).cxx_destruct;
- (void)processAnalytics:(id /* block */)a0;
- (void)resetAnalytics;
- (void)setDuetDataProvider:(id)a0;

@end

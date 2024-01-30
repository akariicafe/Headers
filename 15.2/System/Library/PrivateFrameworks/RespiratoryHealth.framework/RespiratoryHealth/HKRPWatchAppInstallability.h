@protocol HKRPWatchAppInstallabilityDataSource;

@interface HKRPWatchAppInstallability : NSObject {
    id<HKRPWatchAppInstallabilityDataSource> _dataSource;
}

@property (readonly, nonatomic) BOOL shouldInstallWatchApp;

- (id)initWithDataSource:(id)a0;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

@class NSObject, SBHSelectedApplicationDataSource, SBHIconModel;
@protocol OS_dispatch_queue;

@interface SearchUIHomeScreenModel : NSObject

@property (retain, nonatomic) SBHIconModel *iconModel;
@property (retain, nonatomic) SBHSelectedApplicationDataSource *dataSource;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)sharedInstance;

- (void)resetIconModel;
- (id)appIconForApplicationBundleIdentifier:(id)a0;
- (id)clipIconForIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end

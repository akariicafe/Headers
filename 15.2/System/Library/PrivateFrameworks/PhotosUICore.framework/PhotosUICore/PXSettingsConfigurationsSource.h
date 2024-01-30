@class NSMutableArray, NSUserDefaults;
@protocol PXSettingsConfigurationsSourceObserver;

@interface PXSettingsConfigurationsSource : NSObject <PXSettingsConfigurationsMutableSource>

@property (readonly, nonatomic) NSMutableArray *configurations;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) long long numberOfConfigurations;
@property (weak, nonatomic) id<PXSettingsConfigurationsSourceObserver> observer;

- (void)_save;
- (id)initWithUserDefaults:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)insertConfiguration:(id)a0 atIndex:(long long)a1;
- (void)insertConfigurations:(id)a0 atIndex:(long long)a1;
- (void)deleteConfigurationAtIndex:(long long)a0;
- (void)deleteAllConfigurations;
- (void)renameConfigurationAtIndex:(long long)a0 withName:(id)a1;
- (void)updateConfigurationAtIndex:(long long)a0;
- (id)configurationAtIndex:(long long)a0;
- (long long)indexOfConfiguration:(id)a0;

@end

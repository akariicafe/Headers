@class NSString;
@protocol HMDUnifiedLanguageValueListSettingDataProviderDataSource;

@interface HMDUnifiedLanguageValueListSettingDataProvider : HMFObject <HMFLogging, HMDLanguageValueListSettingDataProvider>

@property (weak) id<HMDUnifiedLanguageValueListSettingDataProviderDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)unifyLanguageValues:(id)a0 withValues:(id)a1;

- (void).cxx_destruct;
- (id)dataSourceDataProviders;
- (id)languageValueList;

@end

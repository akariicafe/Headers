@class NSArray, NSString, _SFSearchEngineInfo, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _SFSearchEngineController : NSObject <WBSSearchProviderContext> {
    NSArray *_searchEngines;
    unsigned long long _defaultSearchEngineIndex;
    NSObject<OS_dispatch_queue> *_searchEnginesQueue;
    _SFSearchEngineInfo *_defaultSearchEngine;
}

@property (readonly, copy, nonatomic) NSArray *engines;
@property (readonly, copy, nonatomic) NSArray *enginesAvailableForUnifiedFieldSearching;
@property (readonly, copy, nonatomic) NSArray *searchEngineNames;
@property (readonly, copy, nonatomic) NSString *defaultSearchEngineName;
@property (readonly, nonatomic) _SFSearchEngineInfo *defaultSearchEngineIfPopulated;
@property (readonly, nonatomic) long long deviceType;
@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, copy, nonatomic) NSString *systemLanguage;
@property (readonly, copy, nonatomic) NSDictionary *templateParameterValues;
@property (readonly, copy, nonatomic) NSDictionary *carrierTemplateParameterValues;
@property (readonly, nonatomic) BOOL isChinaDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedInstanceIfAvailable;
+ (BOOL)_deviceRegionCodeIsChina;
+ (void)_initializeSharedInstance;
+ (void)loadSystemLanguageProperties;

- (BOOL)isSearchProviderEnabled:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)defaultSearchEngine;
- (void)_addAllWebSearchEngineInfosToArray:(id)a0 andAddUserVisibleWebSearchEngineInfosToArray:(id)a1;
- (id)_existingEngineInfoFor:(id)a0;
- (void)_getEngines:(id *)a0 defaultSearchEngineIndex:(unsigned long long *)a1;
- (void)_loadSystemPropertiesForSearchEngine:(id)a0;
- (void)_populateSearchEngines;
- (void)_postDefaultSearchEngineDidChange;
- (void)_setDefaultSearchEngine:(id)a0;
- (void)_setEngines:(id)a0 defaultSearchEngineIndex:(unsigned long long)a1;
- (id)_specialSearchEngines;
- (id)engineInfoFor:(id)a0;
- (id)engineInfoForScriptName:(id)a0;
- (void)reloadSearchEngines;
- (id)safeSearchRequestForSearchRequest:(id)a0;
- (void)setDefaultSearchEngine:(id)a0;

@end

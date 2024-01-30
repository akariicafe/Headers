@class NSArray, NSString, _SFSearchEngineInfo, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _SFSearchEngineController : NSObject {
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
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSDictionary *templateParameterValues;
@property (readonly, nonatomic) NSDictionary *carrierTemplateParameterValues;

+ (id)sharedInstance;
+ (BOOL)_deviceRegionCodeIsChina;
+ (void)_initializeSharedInstance;
+ (void)loadSystemLanguageProperties;
+ (id)sharedInstanceIfAvailable;

- (void)_setEngines:(id)a0 defaultSearchEngineIndex:(unsigned long long)a1;
- (id)init;
- (void)_loadSystemPropertiesForSearchEngine:(id)a0;
- (void).cxx_destruct;
- (id)safeSearchRequestForSearchRequest:(id)a0;
- (void)_getEngines:(id *)a0 defaultSearchEngineIndex:(unsigned long long *)a1;
- (void)reloadSearchEngines;
- (void)_populateSearchEngines;
- (void)_setDefaultSearchEngine:(id)a0;
- (id)description;
- (void)_postDefaultSearchEngineDidChange;
- (id)_existingEngineInfoFor:(id)a0;
- (void)_addAllWebSearchEngineInfosToArray:(id)a0 andAddUserVisibleWebSearchEngineInfosToArray:(id)a1;
- (id)engineInfoForScriptName:(id)a0;
- (id)defaultSearchEngine;
- (void)_addSpecialSearchEnginesToArray:(id)a0;
- (id)engineInfoFor:(id)a0;
- (void)setDefaultSearchEngine:(id)a0;

@end

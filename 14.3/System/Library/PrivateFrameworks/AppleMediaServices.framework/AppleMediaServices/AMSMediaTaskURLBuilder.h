@class NSArray, NSDictionary, NSString, AMSMediaTaskTypeConfig;
@protocol AMSBagProtocol;

@interface AMSMediaTaskURLBuilder : NSObject

@property (retain, nonatomic) NSArray *additionalPlatforms;
@property (retain, nonatomic) NSDictionary *additionalQueryParams;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) NSArray *bundleIdentifiers;
@property (nonatomic) BOOL charts;
@property (readonly, nonatomic) NSString *clientVersion;
@property (readonly, nonatomic) AMSMediaTaskTypeConfig *config;
@property (retain, nonatomic) NSDictionary *filters;
@property (retain, nonatomic) NSArray *includedResultKeys;
@property (retain, nonatomic) NSArray *itemIdentifiers;
@property (retain, nonatomic) NSString *logKey;
@property (retain, nonatomic) NSString *searchTerm;

- (id)build;
- (void).cxx_destruct;
- (id)_basePath;
- (id)_hostPromise;
- (id)initWithConfig:(id)a0 clientVersion:(id)a1 bag:(id)a2;
- (id)_pathPromise;
- (id)_verifyConfiguration;
- (void)_addBundleIdentifiers:(id)a0;
- (void)_addItemIdentifiers:(id)a0;
- (void)_addSearchTerm:(id)a0;
- (id)_devicePlatform;
- (id)_queryItems;
- (void)_addCharts:(id)a0;

@end

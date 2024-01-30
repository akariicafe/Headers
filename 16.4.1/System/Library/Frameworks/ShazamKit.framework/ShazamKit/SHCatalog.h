@class SHCatalogConfiguration;

@interface SHCatalog : NSObject

@property (readonly, copy, nonatomic) SHCatalogConfiguration *_configuration;
@property (readonly, nonatomic) double minimumQuerySignatureDuration;
@property (readonly, nonatomic) double maximumQuerySignatureDuration;

+ (BOOL)_validateInstallationID:(id)a0;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)_createMatcher;
- (id)_createSessionDriver;

@end

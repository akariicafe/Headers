@class NSString;

@interface SHCatalog : NSObject

@property (readonly, copy, nonatomic) NSString *_installationID;
@property (readonly, nonatomic) double minimumQuerySignatureDuration;
@property (readonly, nonatomic) double maximumQuerySignatureDuration;

+ (BOOL)_validateInstallationID:(id)a0;

- (void).cxx_destruct;
- (id)_initWithInstallationID:(id)a0;
- (void)_preload;
- (id)_createMatcher;

@end

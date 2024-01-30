@class NSDictionary;

@interface MSDLocalization : NSObject

@property (retain, nonatomic) NSDictionary *localizationTable;

+ (id)sharedInstance;
+ (BOOL)getWarningKeys:(id *)a0 andPlaceHolderWarnings:(id *)a1 forOwnershipWarningFlag:(id)a2;
+ (void)fillInMissingLocales:(id)a0 withOwnershipWarningMsg:(id)a1;
+ (BOOL)getChannelWarningKeys:(id *)a0 andPlaceHolderWarnings:(id *)a1 forDeviceClass:(id)a2;
+ (BOOL)getRetailWarningKeys:(id *)a0 andPlaceHolderWarnings:(id *)a1 forDeviceClass:(id)a2;
+ (id)getLocalizedOwnershipWarnings:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)localizedStringWithKey:(id)a0 defaultString:(id)a1;

@end

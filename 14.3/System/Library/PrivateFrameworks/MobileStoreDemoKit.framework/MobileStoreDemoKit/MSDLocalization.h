@class NSDictionary;

@interface MSDLocalization : NSObject

@property (retain, nonatomic) NSDictionary *localizationTable;

+ (id)sharedInstance;
+ (void)fillInMissingLocales:(id)a0 withOwnershipWarningMsg:(id)a1 andKey:(id)a2;
+ (id)getLocalizedOwnershipWarnings:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)localizedStringWithKey:(id)a0 defaultString:(id)a1;

@end

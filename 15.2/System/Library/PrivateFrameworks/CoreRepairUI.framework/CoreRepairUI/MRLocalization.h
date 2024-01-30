@class NSMutableDictionary;

@interface MRLocalization : NSObject

@property (retain, nonatomic) NSMutableDictionary *localizationTable;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)localizedStringWithKey:(id)a0 defaultString:(id)a1;

@end

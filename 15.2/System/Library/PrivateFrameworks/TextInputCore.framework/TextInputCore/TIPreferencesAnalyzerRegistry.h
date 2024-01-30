@class NSMutableArray;

@interface TIPreferencesAnalyzerRegistry : NSObject

@property (readonly, nonatomic) NSMutableArray *registry;
@property (readonly, nonatomic) unsigned long long count;

- (void).cxx_destruct;
- (id)init;
- (void)enumerateRegisteredPreferencesUsingBlock:(id /* block */)a0;
- (void)_registerPreference:(id)a0 domain:(id)a1;

@end

@class NSDictionary, TRISystemConfiguration;

@interface TRISystemCovariates : NSObject <TRISystemCovariateProviding> {
    TRISystemConfiguration *_sysConfig;
    NSDictionary *_dictionary;
}

- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)dictionary;
- (id)tri_contextValueWithName:(id)a0;
- (id)getContextValueWithName:(id)a0;
- (id)initWithPaths:(id)a0;

@end

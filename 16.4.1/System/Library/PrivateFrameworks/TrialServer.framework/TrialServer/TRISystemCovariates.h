@class NSDictionary, TRISystemConfiguration;

@interface TRISystemCovariates : NSObject <TRISystemCovariateProviding> {
    TRISystemConfiguration *_sysConfig;
    NSDictionary *_dictionary;
}

- (id)dictionary;
- (id)objectForKey:(id)a0;
- (id)tri_contextValueWithName:(id)a0;
- (id)initWithPaths:(id)a0;
- (id)getContextValueWithName:(id)a0;
- (void).cxx_destruct;

@end

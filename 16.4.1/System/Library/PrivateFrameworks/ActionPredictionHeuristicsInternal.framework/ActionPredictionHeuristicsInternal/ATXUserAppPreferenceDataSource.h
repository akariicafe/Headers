@class ATXHeuristicDevice;

@interface ATXUserAppPreferenceDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)a0;
- (void)preferredAppForIntentName:(id)a0 andParameterCombination:(id)a1 callback:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)appSupportsParameterCombination:(id)a0 forIntent:(id)a1 forBundleId:(id)a2;
- (BOOL)parametersExistInValidCombinationsForParameters:(id)a0 andValidCombinations:(id)a1;
- (void)preferredAppForIntentName:(id)a0 andParameterCombination:(id)a1 skipAppSchemaCheck:(BOOL)a2 callback:(id /* block */)a3;

@end

@class NSSet, NSDictionary;
@protocol ATXFaceSuggestionParameters;

@interface ATXFaceSuggestionScorer : NSObject {
    NSSet *_descriptors;
    id<ATXFaceSuggestionParameters> _parameters;
    NSDictionary *_appLaunchDictionary;
}

@property (readonly, copy, nonatomic) NSSet *signals;

- (void).cxx_destruct;
- (id)initWithParameters:(id)a0 descriptors:(id)a1;
- (void)_loadAppLaunchData;
- (void)_loadSignals;
- (id)_mockScoreForDescriptor:(id)a0;
- (double)featuredScoreForDescriptor:(id)a0;

@end

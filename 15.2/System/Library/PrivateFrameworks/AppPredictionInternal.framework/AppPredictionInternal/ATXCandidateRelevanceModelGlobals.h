@class NSDictionary;

@interface ATXCandidateRelevanceModelGlobals : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (BOOL)isPipelineEnabled;
- (void).cxx_destruct;
- (id)init;
- (int)maxCategoricalFeaturesCount;

@end

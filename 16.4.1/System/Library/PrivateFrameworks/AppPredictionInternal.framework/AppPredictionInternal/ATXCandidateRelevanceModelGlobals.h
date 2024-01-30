@class NSDictionary;

@interface ATXCandidateRelevanceModelGlobals : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (int)maxCategoricalFeaturesCount;
- (BOOL)isPipelineEnabled;
- (id)init;
- (void).cxx_destruct;

@end

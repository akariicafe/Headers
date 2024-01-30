@class NSDictionary;

@interface ATXInfoToBlendingConfidenceMapper : NSObject {
    NSDictionary *_map;
}

- (long long)blendingConfidenceCategoryForInfoConfidenceLevel:(long long)a0;
- (long long)minInfoConfidenceLevelForBlendingConfidenceCategory:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end

@class NSDictionary;

@interface ATXInfoToBlendingConfidenceMapper : NSObject {
    NSDictionary *_map;
}

- (id)init;
- (long long)minInfoConfidenceLevelForBlendingConfidenceCategory:(long long)a0;
- (void).cxx_destruct;
- (long long)blendingConfidenceCategoryForInfoConfidenceLevel:(long long)a0;

@end

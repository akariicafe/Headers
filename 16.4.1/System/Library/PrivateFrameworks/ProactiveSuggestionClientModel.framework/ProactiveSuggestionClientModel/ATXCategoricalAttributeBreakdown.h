@class NSMutableDictionary;

@interface ATXCategoricalAttributeBreakdown : NSObject {
    NSMutableDictionary *_counts;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)allCategories;
- (unsigned long long)countForCategory:(id)a0;
- (void)incrementCountForCategory:(id)a0 by:(unsigned long long)a1;
- (BOOL)isEqualToATXDeviceLevelMetricsCategoricalAttributeBreakdown:(id)a0;
- (double)normalizedCountForCategory:(id)a0;

@end

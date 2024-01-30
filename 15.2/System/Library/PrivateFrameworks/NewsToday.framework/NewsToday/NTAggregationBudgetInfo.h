@class NTPBSectionSlotCostInfo;

@interface NTAggregationBudgetInfo : NSObject <NSCopying>

@property (copy, nonatomic) NTPBSectionSlotCostInfo *sectionSlotCostInfo;
@property (nonatomic) unsigned long long embedsLimit;
@property (nonatomic) BOOL respectMinMaxLimit;
@property (nonatomic) double slotsLimit;
@property (nonatomic) BOOL allowSectionTitles;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

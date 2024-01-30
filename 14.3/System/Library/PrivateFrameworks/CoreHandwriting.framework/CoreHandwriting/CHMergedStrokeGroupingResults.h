@class NSDictionary;

@interface CHMergedStrokeGroupingResults : CHStrokeGroupingResult

@property (readonly, retain, nonatomic) NSDictionary *groupingResultsByStrategyIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithStrokeGroups:(id)a0 createdStrokeGroups:(id)a1 deletedStrokeGroups:(id)a2 groupingResultsByStrategyIdentifier:(id)a3;

@end

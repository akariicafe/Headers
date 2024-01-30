@class NSDate;

@interface WFHKGroupingConfiguration : NSObject

@property (nonatomic) long long groupingOption;
@property (nonatomic) BOOL fillMissing;
@property (retain, nonatomic) NSDate *queryStartDate;
@property (retain, nonatomic) NSDate *queryEndDate;

- (void).cxx_destruct;

@end

@class NSMutableArray;

@interface _PSContactFillerDataCollectionStatistics : NSObject

@property (retain, nonatomic) NSMutableArray *list;
@property double min;
@property double max;
@property double avg;
@property double stdev;

- (void)addValue:(id)a0;
- (void).cxx_destruct;
- (id)initWithList:(id)a0;
- (void)calculateStats;

@end

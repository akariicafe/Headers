@class NSDate;

@interface CUTCheckpointRange : CUTCheckpointSignpost

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic, getter=isOrdered) BOOL ordered;

- (void)_touchEndDate;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 uniqueIdentifier:(id)a1;
- (id)_reportStartDate;
- (id)_reportEndDate;
- (void)mergeWithCheckpoint:(id)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 name:(id)a2 uniqueIdentifier:(id)a3;
- (void)_touchStartDate;
- (id)description;

@end

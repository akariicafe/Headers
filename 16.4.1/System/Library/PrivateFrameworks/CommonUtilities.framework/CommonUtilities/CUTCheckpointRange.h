@class NSDate;

@interface CUTCheckpointRange : CUTCheckpointSignpost

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic, getter=isOrdered) BOOL ordered;

- (id)description;
- (void).cxx_destruct;
- (void)_touchStartDate;
- (id)_reportEndDate;
- (id)_reportStartDate;
- (void)_touchEndDate;
- (id)initWithName:(id)a0 uniqueIdentifier:(id)a1;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 name:(id)a2 uniqueIdentifier:(id)a3;
- (void)mergeWithCheckpoint:(id)a0;

@end

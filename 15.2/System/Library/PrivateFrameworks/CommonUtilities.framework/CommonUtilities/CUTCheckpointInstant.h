@class NSDate;

@interface CUTCheckpointInstant : CUTCheckpointSignpost

@property (retain, nonatomic) NSDate *date;

- (id)initWithName:(id)a0 uniqueIdentifier:(id)a1;
- (void)_touchDate;
- (id)_reportStartDate;
- (id)_reportEndDate;
- (id)initWithDate:(id)a0 name:(id)a1 uniqueIdentifier:(id)a2;
- (void)mergeWithCheckpoint:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end

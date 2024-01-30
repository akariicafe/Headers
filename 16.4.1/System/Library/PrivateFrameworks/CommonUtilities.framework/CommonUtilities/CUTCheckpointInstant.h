@class NSDate;

@interface CUTCheckpointInstant : CUTCheckpointSignpost

@property (retain, nonatomic) NSDate *date;

- (id)description;
- (void).cxx_destruct;
- (id)_reportEndDate;
- (id)_reportStartDate;
- (void)_touchDate;
- (id)initWithDate:(id)a0 name:(id)a1 uniqueIdentifier:(id)a2;
- (id)initWithName:(id)a0 uniqueIdentifier:(id)a1;
- (void)mergeWithCheckpoint:(id)a0;

@end

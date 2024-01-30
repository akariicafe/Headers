@class NSArray;

@interface HDCloudSyncSequenceState : NSObject

@property (readonly, copy, nonatomic) NSArray *recordsToSave;
@property (readonly, copy, nonatomic) NSArray *recordIDsToDelete;
@property (readonly, nonatomic) BOOL shouldClearRebaselineDeadline;

- (void).cxx_destruct;
- (id)initWithRecordsToSave:(id)a0 recordIDsToDelete:(id)a1 shouldClearRebaselineDeadline:(BOOL)a2;

@end

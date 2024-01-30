@class NSArray;

@interface SCWZoneDiff : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *modifiedRecords;
@property (readonly, copy, nonatomic) NSArray *deletedRecordIDs;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

- (id)applyToRecords:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyToModifyRecordsOperation:(id)a0;
- (BOOL)hasSameBaseAsDiff:(id)a0;
- (void).cxx_destruct;
- (id)initWithModifiedRecords:(id)a0 deletedRecordIDs:(id)a1;

@end

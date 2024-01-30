@class NSArray;

@interface SCKZoneDiff : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *modifiedRecords;
@property (readonly, copy, nonatomic) NSArray *deletedRecordIDs;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

- (id)initWithModifiedRecords:(id)a0 deletedRecordIDs:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasSameBaseAsDiff:(id)a0;
- (id)applyToRecords:(id)a0;
- (void)applyToModifyRecordsOperation:(id)a0;

@end

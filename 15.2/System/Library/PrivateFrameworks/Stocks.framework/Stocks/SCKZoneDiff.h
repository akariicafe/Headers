@class NSArray;

@interface SCKZoneDiff : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *modifiedRecords;
@property (readonly, copy, nonatomic) NSArray *deletedRecordIDs;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

- (void)applyToModifyRecordsOperation:(id)a0;
- (BOOL)hasSameBaseAsDiff:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithModifiedRecords:(id)a0 deletedRecordIDs:(id)a1;
- (id)applyToRecords:(id)a0;

@end

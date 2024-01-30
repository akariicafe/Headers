@class NSMutableDictionary, SCKZoneSchema, SCKZoneDiff, NSMutableArray;

@interface SCKZoneModificationSilo : NSObject <SCKZoneModifying>

@property (retain, nonatomic) SCKZoneSchema *zoneSchema;
@property (retain, nonatomic) NSMutableDictionary *originalRecordsByID;
@property (retain, nonatomic) NSMutableDictionary *workingRecordsByID;
@property (retain, nonatomic) NSMutableDictionary *recordsToSaveByID;
@property (retain, nonatomic) NSMutableArray *deletedRecordIDs;
@property (readonly, copy, nonatomic) SCKZoneDiff *diff;

- (id)initWithZoneSchema:(id)a0 contents:(id)a1;
- (BOOL)recordExistsWithName:(id)a0;
- (void)deleteRecordWithName:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shouldAssertRecordValidity;
- (void)createOrUpdateRecordWithName:(id)a0 recordType:(id)a1 modifyBlock:(id /* block */)a2;

@end

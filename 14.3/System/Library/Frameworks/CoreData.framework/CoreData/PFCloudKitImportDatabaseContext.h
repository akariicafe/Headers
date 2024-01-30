@class NSSet, NSMutableSet, CKServerChangeToken;

@interface PFCloudKitImportDatabaseContext : NSObject

@property (readonly, copy, nonatomic) NSSet *interestingZoneIDs;
@property (readonly, nonatomic) NSMutableSet *changedRecordZoneIDs;
@property (readonly, nonatomic) NSMutableSet *deletedRecordZoneIDs;
@property (readonly, nonatomic) NSMutableSet *purgedRecordZoneIDs;
@property (retain, nonatomic) CKServerChangeToken *updatedChangeToken;

- (void)dealloc;
- (id)initWithInterestingZoneIDs:(id)a0;
- (void)zoneWithIDChanged:(id)a0;
- (void)zoneWithIDWasDeleted:(id)a0;
- (void)zoneWithIDWasPurged:(id)a0;
- (id)description;
- (BOOL)hasWorkToDo;

@end

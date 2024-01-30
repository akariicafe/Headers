@class CKServerChangeToken, NSMutableSet;

@interface PFCloudKitImportDatabaseContext : NSObject {
    NSMutableSet *_changedRecordZoneIDs;
    NSMutableSet *_deletedRecordZoneIDs;
    NSMutableSet *_purgedRecordZoneIDs;
    CKServerChangeToken *_updatedChangeToken;
}

- (id)description;
- (id)init;
- (void)dealloc;

@end

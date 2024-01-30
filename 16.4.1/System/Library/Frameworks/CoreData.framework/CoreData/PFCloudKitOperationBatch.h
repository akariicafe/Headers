@class NSMutableArray, NSMutableSet, NSMutableDictionary;

@interface PFCloudKitOperationBatch : NSObject {
    NSMutableSet *_deletedRecordIDs;
    NSMutableDictionary *_recordTypeToDeletedRecordID;
    NSMutableArray *_records;
    NSMutableSet *_recordIDs;
    unsigned long long _sizeInBytes;
}

- (void)dealloc;
- (id)init;

@end

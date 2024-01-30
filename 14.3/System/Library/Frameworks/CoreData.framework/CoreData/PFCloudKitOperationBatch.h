@class NSMutableDictionary, NSMutableArray, NSMutableSet;

@interface PFCloudKitOperationBatch : NSObject

@property (readonly, nonatomic) NSMutableArray *records;
@property (readonly, nonatomic) NSMutableSet *recordIDs;
@property (readonly, nonatomic) NSMutableSet *deletedRecordIDs;
@property (readonly, nonatomic) NSMutableDictionary *recordTypeToDeletedRecordID;
@property (readonly, nonatomic) unsigned long long sizeInBytes;
@property (readonly, nonatomic) unsigned long long totalObjectCount;

- (void)addRecord:(id)a0;
- (id)init;
- (void)dealloc;
- (void)addDeletedRecordID:(id)a0 forRecordOfType:(id)a1;

@end

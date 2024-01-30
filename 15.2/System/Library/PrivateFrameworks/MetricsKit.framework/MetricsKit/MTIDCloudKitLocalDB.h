@class NSString, CKRecordZoneID, NSURL;
@protocol MTIDCloudKitLocalDBDelegate;

@interface MTIDCloudKitLocalDB : NSObject

@property (retain, nonatomic) NSString *recordType;
@property (retain, nonatomic) CKRecordZoneID *recordZoneID;
@property (retain, nonatomic) NSURL *pathURL;
@property (nonatomic) BOOL zoneCreated;
@property (weak, nonatomic) id<MTIDCloudKitLocalDBDelegate> delegate;

- (void).cxx_destruct;
- (void)clearData;
- (BOOL)fileExists:(id)a0;
- (BOOL)writeRecord:(id)a0 error:(id *)a1;
- (id)allRecords;
- (id)syncStatusCode;
- (void)setSyncStatusCode:(id)a0;
- (id)initWithContainerIdentifier:(id)a0 recordType:(id)a1 recordZoneID:(id)a2;
- (id)recordWithID:(id)a0 error:(id *)a1;
- (BOOL)needsFetchRecords;
- (void)setNeedsFetchRecords:(BOOL)a0;
- (BOOL)setUserRecordIDName:(id)a0;
- (id)pendingRecordIDs;
- (BOOL)deleteRecordWithID:(id)a0 error:(id *)a1;
- (BOOL)deleteIfExists:(id)a0 error:(id *)a1;
- (id)dataForName:(id)a0 error:(id *)a1;
- (id)userRecordIDName;
- (BOOL)writeData:(id)a0 forName:(id)a1 error:(id *)a2;
- (id)encodeRecord:(id)a0;
- (id)decodeRecordFromData:(id)a0 recordID:(id)a1 isSynchronized:(BOOL)a2;

@end

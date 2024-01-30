@class NSString, CKRecordZoneID, NSURL;
@protocol MTIDCloudKitLocalDBDelegate;

@interface MTIDCloudKitLocalDB : NSObject

@property (retain, nonatomic) NSString *recordType;
@property (retain, nonatomic) CKRecordZoneID *recordZoneID;
@property (retain, nonatomic) NSURL *pathURL;
@property (nonatomic) BOOL zoneCreated;
@property (weak, nonatomic) id<MTIDCloudKitLocalDBDelegate> delegate;

- (id)allRecords;
- (BOOL)writeRecord:(id)a0 error:(id *)a1;
- (void)clearData;
- (void).cxx_destruct;
- (BOOL)fileExists:(id)a0;
- (id)dataForName:(id)a0 error:(id *)a1;
- (id)decodeRecordFromData:(id)a0 recordID:(id)a1 isSynchronized:(BOOL)a2;
- (BOOL)deleteIfExists:(id)a0 error:(id *)a1;
- (BOOL)deleteRecordWithID:(id)a0 error:(id *)a1;
- (id)encodeRecord:(id)a0;
- (id)initWithContainerIdentifier:(id)a0 recordType:(id)a1 recordZoneID:(id)a2;
- (BOOL)needsFetchRecords;
- (id)pendingRecordIDs;
- (id)recordWithID:(id)a0 error:(id *)a1;
- (void)setNeedsFetchRecords:(BOOL)a0;
- (void)setSyncStatusCode:(id)a0;
- (BOOL)setUserRecordIDName:(id)a0;
- (id)syncStatusCode;
- (id)userRecordIDName;
- (BOOL)writeData:(id)a0 forName:(id)a1 error:(id *)a2;

@end

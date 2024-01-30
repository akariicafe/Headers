@class BRCItemID, NSString, CKRecordID, CKRecord, BRCProgress, BRCClientZone, NSNumber;

@interface BRCDownload : NSObject <BRCTransfer> {
    long long _throttleID;
}

@property (readonly, nonatomic) int kind;
@property (readonly, nonatomic) NSString *etagIfLoser;
@property (readonly, nonatomic) BRCClientZone *clientZone;
@property (readonly, nonatomic) CKRecordID *recordID;
@property (readonly, nonatomic) CKRecordID *secondaryRecordID;
@property (readonly, nonatomic) BRCItemID *itemID;
@property (readonly, nonatomic) NSString *stageID;
@property (readonly, nonatomic) NSNumber *transferID;
@property (readonly, nonatomic) NSString *etag;
@property (readonly, nonatomic) unsigned long long totalSize;
@property (readonly, nonatomic) BRCProgress *progress;
@property (nonatomic) BOOL progressPublished;
@property (nonatomic) unsigned long long doneSize;
@property (retain, nonatomic) CKRecord *record;
@property (retain, nonatomic) CKRecord *secondaryRecord;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDocument:(id)a0 stageID:(id)a1;

@end

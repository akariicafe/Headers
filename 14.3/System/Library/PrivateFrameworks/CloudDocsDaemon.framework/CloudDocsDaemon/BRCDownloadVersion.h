@class NSNumber, CKRecordID, CKRecord, BRCClientZone, BRCProgress, NSError, GSPermanentStorage;

@interface BRCDownloadVersion : BRCDownload {
    CKRecordID *_secondaryRecordID;
    CKRecord *_secondaryRecord;
    BRCClientZone *_clientZone;
    BOOL _sharedZone;
}

@property (readonly, nonatomic) GSPermanentStorage *storage;
@property (retain, nonatomic) BRCProgress *progress;
@property (readonly, nonatomic) NSError *gsError;
@property (readonly, nonatomic) BOOL isLoser;
@property (readonly, nonatomic) NSNumber *docID;

- (int)kind;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDocument:(id)a0 stageID:(id)a1 etag:(id)a2 isLoser:(BOOL)a3;
- (id)secondaryRecordID;
- (id)secondaryRecord;
- (void)setSecondaryRecord:(id)a0;
- (id)_stageContentWithSession:(id)a0 error:(id *)a1;
- (id)_stageWithSession:(id)a0 creationInfo:(id *)a1 error:(id *)a2;

@end

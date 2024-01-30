@class DESRecordStore, NSUUID, NSString, APOdmlSettings, NSMutableArray, ADVector;

@interface APOdmlDESRecord : NSObject

@property (retain, nonatomic) DESRecordStore *recordStore;
@property (retain, nonatomic) NSUUID *recordIdentifier;
@property (nonatomic) BOOL shouldMakeRecord;
@property (retain, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSMutableArray *postWriteOperations;
@property BOOL writingInProgress;
@property (retain, nonatomic) NSMutableArray *originalRecords;
@property (retain, nonatomic) NSMutableArray *rerankedRecords;
@property (retain, nonatomic) ADVector *appUsageVector;
@property (retain, nonatomic) APOdmlSettings *odmlSettings;

- (id)initWithRequestID:(id)a0;
- (void).cxx_destruct;
- (void)writeDESRecord;
- (id)recordData;
- (void)updateAd:(id)a0 inArray:(id)a1;
- (void)performAfterWrite:(id /* block */)a0;
- (void)saveDESRecord:(id)a0 info:(id)a1;
- (void)handleSaveCompletion:(id)a0 error:(id)a1;
- (void)updateAdData:(id)a0;
- (void)addAdListToDES:(id)a0 listType:(long long)a1;

@end

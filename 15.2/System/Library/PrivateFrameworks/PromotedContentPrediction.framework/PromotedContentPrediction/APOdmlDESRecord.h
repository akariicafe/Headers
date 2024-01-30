@class NSUUID, NSString, NSArray, APOdmlVector, DESRecordStore, NSMutableDictionary, NSMutableArray, APOdmlSettings;

@interface APOdmlDESRecord : NSObject

@property (retain, nonatomic) DESRecordStore *recordStore;
@property (retain, nonatomic) NSUUID *recordIdentifier;
@property (nonatomic) BOOL shouldMakeRecord;
@property (retain, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSMutableArray *postWriteOperations;
@property BOOL writingInProgress;
@property (retain, nonatomic) NSMutableDictionary *adRecords;
@property (retain, nonatomic) APOdmlVector *runtimeAppUsageVector;
@property (retain, nonatomic) APOdmlVector *counterfactualAppUsageVector;
@property (retain, nonatomic) NSArray *organicsList;
@property (retain, nonatomic) NSArray *originalAdOrderList;
@property (retain, nonatomic) NSArray *rerankedAdOrderList;
@property (retain, nonatomic) APOdmlSettings *runtimeOdmlSettings;
@property (retain, nonatomic) APOdmlSettings *counterfactualOdmlSettings;
@property (nonatomic) BOOL organicsExist;

- (id)recordData;
- (id)initWithRequestID:(id)a0;
- (void)handleSaveCompletion:(id)a0 error:(id)a1;
- (void)performAfterWrite:(id /* block */)a0;
- (void)saveDESRecord:(id)a0 info:(id)a1;
- (void)addAdListToDES:(id)a0 organics:(id)a1;
- (void)updateAd:(id)a0 event:(long long)a1;
- (void)writeDESRecord;
- (void).cxx_destruct;
- (void)updateRerankedAdList:(id)a0;
- (id)dictionaryRepresentation;

@end

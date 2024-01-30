@interface CKTiledLayoutGeneratorScanState : NSObject

@property (nonatomic) long long scanLocation;
@property (retain, nonatomic) id scannedBatchID;
@property (nonatomic) BOOL scannedBatchHasCaption;
@property (nonatomic) long long scanSpecialSequenceCount;

- (void).cxx_destruct;

@end

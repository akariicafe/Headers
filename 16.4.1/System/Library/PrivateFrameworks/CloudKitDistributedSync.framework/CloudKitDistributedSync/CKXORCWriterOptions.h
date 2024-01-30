@class NSString;

@interface CKXORCWriterOptions : NSObject

@property (nonatomic) double batchCommitMarginPercentage;
@property (nonatomic) unsigned long long batchResizeIncrement;
@property (nonatomic) unsigned long long compressionBlockSize;
@property (nonatomic) long long compressionKind;
@property (nonatomic) unsigned long long stripeSize;
@property (nonatomic) BOOL testRowsInterspersedWithNulls;
@property (retain, nonatomic) NSString *testExceptionDuringCommitBatch;
@property (nonatomic) unsigned long long testExceptionDuringCommitBatchCommitsToSkip;
@property (nonatomic) unsigned long long batchSize;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBatchSize:(unsigned long long)a0;

@end

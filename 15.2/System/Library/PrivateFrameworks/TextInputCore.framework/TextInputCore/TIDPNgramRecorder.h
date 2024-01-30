@interface TIDPNgramRecorder : TIDPNgramRecorderCascading

@property (nonatomic) BOOL shouldDonateNgramSampleRandomly;

+ (void)enumerateNgramsFromSession:(id)a0 n:(unsigned long long)a1 usingBlock:(id /* block */)a2;

- (id)records;
- (BOOL)report;
- (id)delegate;
- (id)recordingKey;
- (id)initWithTypingSession:(id)a0 aligned:(id)a1 n:(unsigned long long)a2 shouldDonateNgramSampleRandomly:(BOOL)a3;
- (id)randomRecords;
- (id)randomRecordsLimitedByCount:(unsigned long long)a0;

@end

@class NSError;

@interface CDPCAEscrowRepairReporter : CDPCAReporter

@property (nonatomic) unsigned long long context;
@property (nonatomic) BOOL wasSilentEscrowRecordRepairAttempted;
@property (nonatomic) BOOL didSilentEscrowRecordRepairSucceed;
@property (nonatomic) unsigned long long deviceEscrowRecordState;
@property (nonatomic) BOOL didForceEscrowCache;
@property (retain, nonatomic) NSError *error;

- (id)initWithContext:(unsigned long long)a0;
- (void).cxx_destruct;

@end

@interface CDPCAEscrowRecoveryInfo : NSObject

@property (nonatomic) long long deviceCount;
@property (nonatomic) long long maxRecoveryAttempts;
@property (nonatomic) long long totalRecoveryAttempts;
@property (nonatomic) double newestRecordAge;
@property (nonatomic) unsigned long long walrusStatus;

@end

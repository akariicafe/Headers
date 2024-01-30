@class NSString, CDPDevice, CDPDCircleJoinResult;

@interface CDPDSecureBackupContext : NSObject

@property (copy, nonatomic) NSString *localSecret;
@property (nonatomic) unsigned long long localSecretType;
@property (copy, nonatomic) CDPDevice *device;
@property (copy, nonatomic) NSString *recoverySecret;
@property (nonatomic) BOOL silentRecovery;
@property (copy, nonatomic) NSString *recoveryKey;
@property (nonatomic) BOOL usePreviouslyCachedRecoveryKey;
@property (nonatomic) BOOL usePreviouslyCachedSecret;
@property (retain, nonatomic) CDPDCircleJoinResult *circleJoinResult;
@property (retain, nonatomic) NSString *preRecordUUID;

- (void).cxx_destruct;
- (id)description;

@end

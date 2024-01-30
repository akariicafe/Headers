@class NSString, NSArray, NSError, NSMutableArray;

@interface SCLSettingsSyncContext : NSObject <NSSecureCoding> {
    NSMutableArray *_recoveryHistory;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long syncStatus;
@property (copy, nonatomic) NSString *messageIdentifier;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) NSArray *recoveryHistory;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)clearRecoveryHistory;
- (void)addRecoveryHistory:(unsigned long long)a0;

@end

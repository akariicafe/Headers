@interface SUCoreDiagStats : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long beginCount;
@property (nonatomic) long long endSuccessCount;
@property (nonatomic) long long endFailCount;
@property (nonatomic) long long errorCount;
@property (nonatomic) long long anomalyCount;
@property (nonatomic) long long failureCount;
@property (nonatomic) long long faultCount;
@property (nonatomic) long long stateEventCount;

- (id)summary;
- (id)init;
- (id)copy;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBeginCount:(long long)a0 withEndSuccessCount:(long long)a1 withEndFailCount:(long long)a2 withErrorCount:(long long)a3 withAnomalyCount:(long long)a4 withFailureCount:(long long)a5 withFaultCount:(long long)a6 withStateEventCount:(long long)a7;

@end

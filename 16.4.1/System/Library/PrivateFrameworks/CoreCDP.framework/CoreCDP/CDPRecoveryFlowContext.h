@class CDPContext;

@interface CDPRecoveryFlowContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CDPContext *context;
@property (nonatomic) BOOL hasPeersForRemoteApproval;
@property (nonatomic) BOOL isWalrusEnabled;
@property (nonatomic) double rpdProbationDuration;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end

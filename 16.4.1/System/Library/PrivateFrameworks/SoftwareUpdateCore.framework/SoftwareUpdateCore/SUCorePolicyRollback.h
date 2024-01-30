@class NSDictionary;

@interface SUCorePolicyRollback : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL performPhase;
@property (nonatomic) BOOL performRollbackPreparePhase;
@property (nonatomic) BOOL performRollbackSuspendPhase;
@property (nonatomic) BOOL performRollbackResumePhase;
@property (nonatomic) BOOL performRollbackApplyPhase;
@property (nonatomic) BOOL skipCancelPreviousUpdate;
@property (retain, nonatomic) NSDictionary *additionalOptions;
@property (retain, nonatomic) NSDictionary *baseRollbackOptions;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)summary;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end

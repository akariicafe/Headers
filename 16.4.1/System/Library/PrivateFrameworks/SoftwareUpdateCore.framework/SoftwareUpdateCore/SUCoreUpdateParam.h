@class SUCoreRollback, NSError, SUCoreProgress, SUCorePolicy;

@interface SUCoreUpdateParam : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long targetPhase;
@property (retain, nonatomic) SUCorePolicy *policy;
@property (retain, nonatomic) SUCoreProgress *downloadProgress;
@property (retain, nonatomic) SUCoreProgress *prepareProgress;
@property (retain, nonatomic) SUCoreRollback *rollback;
@property (nonatomic) long long resultCode;
@property (retain, nonatomic) NSError *error;

+ (id)targetPhaseName:(long long)a0;
+ (id)targetRollbackPhaseName:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)copy;
- (id)initWithError:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initTargetPhase:(long long)a0 policy:(id)a1 downloadProgress:(id)a2 prepareProgress:(id)a3 rollback:(id)a4 resultCode:(long long)a5 error:(id)a6;
- (id)initTargetPhase:(long long)a0 withPolicy:(id)a1;
- (id)initWithDownloadProgress:(id)a0;
- (id)initWithPrepareProgress:(id)a0;
- (id)initWithRollback:(id)a0 withError:(id)a1;
- (id)initWithRollback:(id)a0 withPolicy:(id)a1;

@end

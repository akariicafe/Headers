@class SUCoreProgress, NSError, SUCorePolicy;

@interface SUCoreUpdateParam : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long targetPhase;
@property (retain, nonatomic) SUCorePolicy *policy;
@property (retain, nonatomic) SUCoreProgress *downloadProgress;
@property (retain, nonatomic) SUCoreProgress *prepareProgress;
@property (nonatomic) long long resultCode;
@property (retain, nonatomic) NSError *error;

+ (id)targetPhaseName:(long long)a0;

- (id)initWithError:(id)a0;
- (id)summary;
- (id)init;
- (void).cxx_destruct;
- (id)copy;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initTargetPhase:(long long)a0 policy:(id)a1 downloadProgress:(id)a2 prepareProgress:(id)a3 resultCode:(long long)a4 error:(id)a5;
- (id)initTargetPhase:(long long)a0 withPolicy:(id)a1;
- (id)initWithDownloadProgress:(id)a0;
- (id)initWithPrepareProgress:(id)a0;

@end

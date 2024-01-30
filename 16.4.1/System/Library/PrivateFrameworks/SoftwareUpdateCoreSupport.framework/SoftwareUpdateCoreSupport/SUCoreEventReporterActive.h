@class NSURL;

@interface SUCoreEventReporterActive : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *serverURL;
@property (nonatomic) long long attemptedSendCount;
@property (nonatomic) long long failedSendCount;
@property (nonatomic) long long discoveredRunningCount;
@property (nonatomic) long long discoveredSuspendedCount;
@property (nonatomic) long long discoveredCancelingCount;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (BOOL)isEqual:(id)a0;
- (id)copy;
- (id)description;
- (void).cxx_destruct;
- (id)initFromArchivedData:(id)a0;
- (id)initWithServerURL:(id)a0;
- (id)toArchivedData;

@end

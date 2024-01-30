@class ICRemoteRequestOperation;

@interface ICRemoteRequestOperationExecutionContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ICRemoteRequestOperation *remoteRequestOperation;
@property (nonatomic) long long qualityOfService;

- (id)initWithRemoteRequestOperation:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

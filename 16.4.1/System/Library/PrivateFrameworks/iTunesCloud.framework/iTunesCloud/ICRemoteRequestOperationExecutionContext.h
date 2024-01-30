@class ICRemoteRequestOperation;

@interface ICRemoteRequestOperationExecutionContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ICRemoteRequestOperation *remoteRequestOperation;
@property (nonatomic) long long qualityOfService;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRemoteRequestOperation:(id)a0;
- (void).cxx_destruct;

@end

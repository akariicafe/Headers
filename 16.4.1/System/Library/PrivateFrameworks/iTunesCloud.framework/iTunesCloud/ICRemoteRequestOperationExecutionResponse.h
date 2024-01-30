@class NSError;
@protocol NSSecureCoding;

@interface ICRemoteRequestOperationExecutionResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<NSSecureCoding> remoteRequestOperationResponse;
@property (retain, nonatomic) NSError *remoteRequestOperationError;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRemoteRequestOperationResponse:(id)a0 remoteRequestOperationError:(id)a1;
- (void).cxx_destruct;

@end

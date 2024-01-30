@protocol NSSecureCoding;

@interface ICRemoteRequestOperation : ICRequestOperation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=_isShadowOperationForRemoteExecution, setter=_setShadowOperationForRemoteExecution:) BOOL _shadowOperationForRemoteExecution;
@property (retain, nonatomic) id<NSSecureCoding> response;

- (void)encodeWithCoder:(id)a0;
- (void)_execute;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

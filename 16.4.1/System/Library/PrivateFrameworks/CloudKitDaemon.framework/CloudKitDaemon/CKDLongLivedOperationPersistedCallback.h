@class NSInvocation, Protocol;

@interface CKDLongLivedOperationPersistedCallback : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) Protocol *protocol;
@property (retain, nonatomic) NSInvocation *invocation;
@property (nonatomic) BOOL isCompletionCallback;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_validateInvocation;
- (id)initWithProtocol:(id)a0 invocation:(id)a1 isCompletionCallback:(BOOL)a2;

@end

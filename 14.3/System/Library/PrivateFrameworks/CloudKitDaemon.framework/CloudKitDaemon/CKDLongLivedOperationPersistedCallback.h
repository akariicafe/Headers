@class NSInvocation, Protocol;

@interface CKDLongLivedOperationPersistedCallback : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) Protocol *protocol;
@property (retain, nonatomic) NSInvocation *invocation;
@property (nonatomic) BOOL isCompletionCallback;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtocol:(id)a0 invocation:(id)a1 isCompletionCallback:(BOOL)a2;
- (void)_validateInvocation;

@end

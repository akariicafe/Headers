@class NSString;

@interface RTDaemonClientRegistrar : NSObject <NSSecureCoding, RTDaemonClientRegistrarProtocol, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)registered;
- (BOOL)invocationsPending;
- (long long)countOfPendingInvocations;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

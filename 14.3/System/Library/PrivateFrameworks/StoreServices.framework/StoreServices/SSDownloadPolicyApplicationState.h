@class NSString, NSSet;

@interface SSDownloadPolicyApplicationState : NSObject <NSSecureCoding, SSXPCCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSSet *applicationStates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addApplicationState:(long long)a0;
- (void)setNotRunningApplicationStates;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithApplicationIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

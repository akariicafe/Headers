@class NSString, BSSecTask;

@interface BSAuditToken : NSObject <NSCopying, BSXPCCoding, NSSecureCoding> {
    NSString *_bundleID;
    BSSecTask *_secTask;
    BOOL _resolvedBundleID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) long long versionedPID;
@property (readonly, nonatomic) unsigned int euid;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) struct { unsigned int val[8]; } realToken;
@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tokenFromAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)tokenFromAuditTokenRef:(struct { unsigned int x0[8]; } *)a0;
+ (id)tokenFromMachMessage:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; } *)a0;
+ (id)tokenFromXPCConnection:(id)a0;
+ (id)tokenFromNSXPCConnection:(id)a0;
+ (id)tokenForCurrentProcess;
+ (id)tokenFromXPCMessage:(id)a0;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (BOOL)hasEntitlement:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)valueForEntitlement:(id)a0;
- (BOOL)hasSameProcessAsAuditToken:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

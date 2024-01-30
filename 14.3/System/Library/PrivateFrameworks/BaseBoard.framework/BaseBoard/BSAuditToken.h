@class NSString;

@interface BSAuditToken : NSObject <NSCopying, BSXPCCoding, NSSecureCoding> {
    NSString *_bundleID;
    BOOL _resolvedBundleID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _secTaskLock;
    struct __SecTask { } *_lazy_secTaskLock_secTask;
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

+ (id)tokenFromNSXPCConnection:(id)a0;
+ (id)tokenFromXPCMessage:(id)a0;
+ (id)tokenFromAuditTokenRef:(struct { unsigned int x0[8]; } *)a0;
+ (id)tokenForCurrentProcess;
+ (id)tokenFromMachMessage:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; } *)a0;
+ (id)tokenFromAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)tokenFromXPCConnection:(id)a0;

- (id)initWithXPCDictionary:(id)a0;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (void).cxx_destruct;
- (BOOL)hasSameProcessAsAuditToken:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)valueForEntitlement:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (BOOL)hasEntitlement:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

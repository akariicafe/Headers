@class BSAuditToken;

@interface BSMachPortTaskNameRight : BSMachPortSendRight {
    BSAuditToken *_lock_auditToken;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) BSAuditToken *auditToken;

+ (BOOL)supportsSecureCoding;
+ (id)taskNameForPID:(int)a0;

- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithPID:(int)a0;
- (void).cxx_destruct;

@end

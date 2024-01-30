@class BSAuditToken;

@interface BSMachPortTaskNameRight : BSMachPortSendRight {
    BSAuditToken *_critical_auditToken;
}

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) BSAuditToken *auditToken;

+ (BOOL)supportsSecureCoding;
+ (id)taskNameForPID:(int)a0;

- (id)initWithPID:(int)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

@class NSData, NSXPCConnection;

@interface Caller : NSObject

@property (readonly, weak, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) unsigned int euid;
@property (readonly, nonatomic) int asid;
@property (readonly, nonatomic) struct { unsigned int x0[8]; } auditToken;
@property (readonly, nonatomic) NSData *auditTokenData;

+ (id)current;

- (void).cxx_destruct;
- (BOOL)isEqualToAuditTokenData:(id)a0;
- (BOOL)isEqualToAuditToken:(struct { unsigned int x0[8]; })a0;
- (unsigned long long)hash;
- (id)initWithConnection:(id)a0;
- (id)description;
- (BOOL)hasEntitlement:(id)a0;
- (BOOL)isEqual:(id)a0;

@end

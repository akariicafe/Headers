@class NSData, NSXPCConnection;

@interface Caller : NSObject

@property (readonly, weak, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) unsigned int euid;
@property (readonly, nonatomic) int asid;
@property (readonly, nonatomic) struct { unsigned int x0[8]; } auditToken;
@property (readonly, nonatomic) NSData *auditTokenData;

+ (id)current;

- (BOOL)hasEntitlement:(id)a0;
- (BOOL)isEqualToAuditTokenData:(id)a0;
- (id)initWithConnection:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToAuditToken:(struct { unsigned int x0[8]; })a0;

@end

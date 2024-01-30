@interface CNAuditToken : NSObject

@property (readonly, nonatomic) struct { unsigned int val[8]; } audit_token;

+ (id)auditToken:(struct { unsigned int x0[8]; })a0;

@end

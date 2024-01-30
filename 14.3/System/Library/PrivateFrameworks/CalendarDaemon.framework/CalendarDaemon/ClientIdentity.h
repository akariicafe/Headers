@class NSString;

@interface ClientIdentity : NSObject

@property (readonly, nonatomic) struct { unsigned int val[8]; } auditToken;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *clientName;
@property (readonly, copy, nonatomic) NSString *codeSigningIdentity;
@property (readonly, nonatomic) int pid;

- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (void).cxx_destruct;
- (id)description;

@end

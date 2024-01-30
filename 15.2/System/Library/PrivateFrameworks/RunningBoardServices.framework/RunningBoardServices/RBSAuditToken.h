@class NSString;

@interface RBSAuditToken : NSObject <RBSXPCCoding, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) int pidversion;
@property (readonly, nonatomic) struct { unsigned int val[8]; } realToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tokenFromAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)tokenFromAuditTokenRef:(struct { unsigned int x0[8]; } *)a0;
+ (id)tokenFromXPCConnection:(id)a0;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)pid;

@end

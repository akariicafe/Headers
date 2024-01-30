@class NSString;

@interface UIDraggingSystemSessionInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int sessionIdentifier;
@property (nonatomic) int processIdentifier;
@property (nonatomic) struct { unsigned int val[8]; } auditToken;
@property (nonatomic) BOOL supportsSystemDrag;
@property (copy, nonatomic) NSString *sceneIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

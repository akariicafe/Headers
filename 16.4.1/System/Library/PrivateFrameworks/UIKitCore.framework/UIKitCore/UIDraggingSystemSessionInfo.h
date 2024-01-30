@class NSString;

@interface UIDraggingSystemSessionInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int sessionIdentifier;
@property (nonatomic) int processIdentifier;
@property (nonatomic) struct { unsigned int val[8]; } auditToken;
@property (nonatomic) BOOL supportsSystemDrag;
@property (copy, nonatomic) NSString *persistentSceneIdentifier;
@property (copy, nonatomic) NSString *sceneIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end

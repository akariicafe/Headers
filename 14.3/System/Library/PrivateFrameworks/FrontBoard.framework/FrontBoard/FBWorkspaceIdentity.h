@interface FBWorkspaceIdentity : NSObject <NSCopying>

@property (readonly, nonatomic) int pid;

+ (id)identityWithPid:(int)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_initWithPid:(int)a0;

@end

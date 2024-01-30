@interface LNEmbeddedApplicationConnectionOptions : LNConnectionOptions

@property (nonatomic) BOOL suspended;
@property (nonatomic) BOOL sceneless;
@property (nonatomic) long long openApplicationPriority;
@property (nonatomic) BOOL allowsForegroundAppLaunchWhileInCarPlay;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;

@end

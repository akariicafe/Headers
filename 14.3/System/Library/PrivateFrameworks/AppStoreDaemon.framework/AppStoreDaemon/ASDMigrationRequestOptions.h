@interface ASDMigrationRequestOptions : ASDRequestOptions

@property (readonly, nonatomic) unsigned long long migrationType;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMigrationType:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end

@interface LNMacApplicationConnectionOptions : LNConnectionOptions

@property (nonatomic, getter=isBackground) BOOL background;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;

@end

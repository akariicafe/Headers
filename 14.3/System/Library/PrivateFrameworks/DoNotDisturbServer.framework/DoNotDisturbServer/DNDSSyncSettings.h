@interface DNDSSyncSettings : NSObject <NSCopying>

@property (readonly, nonatomic, getter=isSyncEnabled) BOOL syncEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithSyncEnabled:(BOOL)a0;

@end

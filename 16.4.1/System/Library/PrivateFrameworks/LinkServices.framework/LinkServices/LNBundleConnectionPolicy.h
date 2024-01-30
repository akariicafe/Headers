@class NSString;

@interface LNBundleConnectionPolicy : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) NSString *bundleIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)connectionWithError:(id *)a0;
- (id)initWithBundleIdentifier:(id)a0 appBundleIdentifier:(id)a1;

@end

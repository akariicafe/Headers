@class NSString;

@interface IAMTriggerKey : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *nameSpacedKeyName;

+ (id)nameSpacedKeyNameForName:(id)a0 bundleIdentifier:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 bundleIdentifier:(id)a1;

@end

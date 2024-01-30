@class NSString, NSDictionary, NSArray;

@interface VSKeychainItemKind : NSObject <NSCopying>

@property (copy, nonatomic) NSString *itemClassName;
@property (nonatomic) const struct __CFString { } *secItemClass;
@property (readonly, copy, nonatomic) NSDictionary *attributesByName;
@property (readonly, copy, nonatomic) NSDictionary *attributesBySecItemAttributeKey;
@property (copy, nonatomic) NSArray *properties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end

@class NSString, NSDictionary, NSArray;

@interface VSKeychainItemKind : NSObject <NSCopying>

@property (copy, nonatomic) NSString *itemClassName;
@property (nonatomic) const struct __CFString { } *secItemClass;
@property (readonly, copy, nonatomic) NSDictionary *attributesByName;
@property (copy, nonatomic) NSArray *properties;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end

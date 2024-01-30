@class NSArray;

@interface CNUICoreContactsAuthorizationModel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSArray *changedItems;
@property (readonly, nonatomic) NSArray *remoteItems;
@property (readonly, nonatomic) NSArray *bundleIdentifiers;
@property (readonly, nonatomic) BOOL isEmpty;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithItems:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)itemWithMatchingBundleIdentifier:(id)a0;
- (id)modelByCopyingIconsOfRemoteItemsFromModel:(id)a0;
- (id)modelByCopyingItemsWithBundleIdentifier:(id)a0;

@end

@class SKUIStoreIdentifier, NSNumber, NSString;

@interface SKUILibraryItem : NSObject <NSCopying>

@property (copy, nonatomic) SKUIStoreIdentifier *storeIdentifier;
@property (readonly, nonatomic) NSNumber *storeItemIdentifier;
@property (copy, nonatomic) NSString *storeFlavorIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end

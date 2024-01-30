@class NSMapTable;

@interface MPUContentItemIdentifierCollection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSMapTable *_identifierTypeToIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long identifierCount;
@property (readonly, nonatomic) unsigned long long itemType;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)_copyWithZone:(struct _NSZone { } *)a0 class:(Class)a1;
- (void)enumerateIdentifiersUsingBlock:(id /* block */)a0;
- (void)_setIdentifier:(id)a0 forIdentifierType:(unsigned long long)a1;
- (id)initWithItemType:(unsigned long long)a0;
- (id)identifierForIdentifierType:(unsigned long long)a0;

@end

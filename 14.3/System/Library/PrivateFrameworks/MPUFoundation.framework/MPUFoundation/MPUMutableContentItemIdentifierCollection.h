@interface MPUMutableContentItemIdentifierCollection : MPUContentItemIdentifierCollection

@property (nonatomic) unsigned long long itemType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setItemType:(unsigned long long)a0;
- (void)setIdentifier:(id)a0 forIdentifierType:(unsigned long long)a1;

@end

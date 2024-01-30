@class NSString, NSArray;

@interface HFReorderableHomeKitItemList : HFReorderableItemListAbstractBase <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) NSString *_applicationDataKey;
@property (copy, nonatomic) NSArray *sortedHomeKitObjectIdentifiers;
@property (readonly, nonatomic) id /* block */ sortedHomeKitItemComparator;
@property (readonly, nonatomic) id /* block */ sortedHomeKitObjectComparator;

+ (id)_dataForHomeKitItem:(id)a0;

- (BOOL)isEmpty;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithApplicationDataContainer:(id)a0 category:(id)a1;
- (id /* block */)_actionSetTypeComparator;
- (id /* block */)_homeKitItemDataComparator;
- (id /* block */)_reorderableObjectDateAddedComparator;
- (id /* block */)_reorderableObjectTitleComparator;
- (id /* block */)_sortedHomeKitIdentifierComparator;

@end

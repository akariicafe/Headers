@class NSString, NSArray;
@protocol HMApplicationData;

@interface HFReorderableHomeKitItemList : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) NSString *_applicationDataKey;
@property (copy, nonatomic) NSArray *sortedHomeKitObjectIdentifiers;
@property (readonly, weak, nonatomic) id<HMApplicationData> applicationDataContainer;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) id /* block */ sortedHomeKitItemComparator;
@property (readonly, nonatomic) id /* block */ sortedHomeKitObjectComparator;

+ (id)_dataForHomeKitItem:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithApplicationDataContainer:(id)a0 category:(id)a1;
- (id /* block */)_homeKitItemDataComparator;
- (id /* block */)_sortedHomeKitIdentifierComparator;
- (id /* block */)_actionSetTypeComparator;
- (id /* block */)_reorderableObjectDateAddedComparator;
- (id /* block */)_reorderableObjectTitleComparator;

@end

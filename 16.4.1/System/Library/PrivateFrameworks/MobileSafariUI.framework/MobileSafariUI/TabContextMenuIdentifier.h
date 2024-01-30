@class NSUUID;
@protocol TabCollectionItem;

@interface TabContextMenuIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) NSUUID *tabUUID;
@property (readonly, weak, nonatomic) id<TabCollectionItem> sourceItem;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithTabUUID:(id)a0 sourceItem:(id)a1;

@end

@class UICollectionReusableView, NSIndexPath, NSString;

@interface _UICollectionViewFocusedItemState : NSObject <NSCopying> {
    UICollectionReusableView *_reusableView;
    NSIndexPath *_indexPath;
    NSString *_elementKind;
    unsigned long long _viewType;
}

+ (id)stateWithReusableView:(id)a0 indexPath:(id)a1 elementKind:(id)a2 viewType:(unsigned long long)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithReusableView:(id)a0 indexPath:(id)a1 elementKind:(id)a2 viewType:(unsigned long long)a3;

@end

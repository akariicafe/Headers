@class NSArray;

@interface _UICollectionLayoutVisualTreeNode : _UICollectionLayoutVisualFormatItem

@property (retain, nonatomic) NSArray *children;
@property (nonatomic) unsigned long long axis;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isVerticalGroup;
- (id)initWithParent:(id)a0 children:(id)a1 axis:(unsigned long long)a2;
- (BOOL)isHorizontalGroup;

@end

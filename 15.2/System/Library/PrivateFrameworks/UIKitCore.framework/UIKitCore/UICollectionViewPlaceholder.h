@class NSString, NSIndexPath;

@interface UICollectionViewPlaceholder : NSObject

@property (retain, nonatomic) NSIndexPath *insertionIndexPath;
@property (copy, nonatomic) NSString *cellReuseIdentifier;
@property (copy, nonatomic) id /* block */ cellUpdateHandler;

- (id)initWithInsertionIndexPath:(id)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

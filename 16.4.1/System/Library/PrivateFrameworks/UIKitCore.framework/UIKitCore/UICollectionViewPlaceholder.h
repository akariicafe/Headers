@class NSString, NSIndexPath;

@interface UICollectionViewPlaceholder : NSObject

@property (retain, nonatomic) NSIndexPath *insertionIndexPath;
@property (copy, nonatomic) NSString *cellReuseIdentifier;
@property (copy, nonatomic) id /* block */ cellUpdateHandler;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithInsertionIndexPath:(id)a0 reuseIdentifier:(id)a1;

@end

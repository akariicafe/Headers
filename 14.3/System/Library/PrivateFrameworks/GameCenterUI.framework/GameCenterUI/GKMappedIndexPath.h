@class NSIndexPath;

@interface GKMappedIndexPath : NSIndexPath

@property (retain, nonatomic) id tag;
@property (copy, nonatomic) NSIndexPath *sourceIndexPath;

+ (id)indexPathForItem:(long long)a0 inSection:(long long)a1 fromSourceIndexPath:(id)a2 withTag:(id)a3;

- (void)dealloc;
- (id)description;

@end

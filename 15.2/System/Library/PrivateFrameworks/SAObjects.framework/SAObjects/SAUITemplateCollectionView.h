@class NSArray;

@interface SAUITemplateCollectionView : SAUITemplateBaseItem

@property (copy, nonatomic) NSArray *cells;

+ (id)collectionView;
+ (id)collectionViewWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end

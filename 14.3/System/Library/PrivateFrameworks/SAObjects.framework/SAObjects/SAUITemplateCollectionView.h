@class NSArray;

@interface SAUITemplateCollectionView : SAUITemplateBaseItem

@property (copy, nonatomic) NSArray *cells;

+ (id)collectionViewWithDictionary:(id)a0 context:(id)a1;
+ (id)collectionView;

- (id)groupIdentifier;
- (id)encodedClassName;

@end

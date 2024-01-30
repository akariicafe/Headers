@class NSString, NSMutableArray;

@interface TPPBPolicyCategoriesByView : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasView;
@property (retain, nonatomic) NSString *view;
@property (retain, nonatomic) NSMutableArray *categories;

+ (id)TPPBPolicyCategoriesByViewWithView:(id)a0 categories:(id)a1;
+ (Class)categoriesType;

- (unsigned long long)categoriesCount;
- (void)addCategories:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearCategories;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)categoriesAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end

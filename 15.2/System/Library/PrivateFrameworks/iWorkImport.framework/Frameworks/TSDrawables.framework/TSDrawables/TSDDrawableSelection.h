@class TSDInfoCollectionSelectionHelper, NSSet, NSString;

@interface TSDDrawableSelection : TSKSelection

@property (retain, nonatomic) TSDInfoCollectionSelectionHelper *selectionHelper;
@property (readonly, nonatomic) NSSet *infos;
@property (readonly, nonatomic) unsigned long long infoCount;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSSet *infosWithNonInteractiveInfos;
@property (readonly, nonatomic) NSSet *nonInteractiveInfos;
@property (readonly, nonatomic) NSSet *unlockedInfos;
@property (readonly, nonatomic) unsigned long long unlockedInfoCount;
@property (readonly, nonatomic) NSString *subclassDescription;

+ (Class)archivedSelectionClass;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)containsKindOfClass:(Class)a0;
- (BOOL)containsUnlockedKindOfClass:(Class)a0;
- (id)infosOfClass:(Class)a0;
- (id)initWithInfos:(id)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)UUIDDescription;
- (id)initWithInteractiveInfos:(id)a0 nonInteractiveInfos:(id)a1;

@end

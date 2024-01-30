@class TSDShapeInfo;

@interface TSDFreehandDrawingInfo : TSDGroupInfo

@property (readonly, nonatomic) TSDShapeInfo *freehandDrawingSpacerShape;
@property (nonatomic) double opacity;

- (id)typeName;
- (void).cxx_destruct;
- (Class)repClass;
- (id)copyWithContext:(id)a0;
- (id)childEnumerator;
- (Class)layoutClass;
- (BOOL)allowsTitle;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (id)animationFilters;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (id)childEnumeratorForUserSearch;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (BOOL)allowsCaption;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1 upgradeDOLC:(BOOL)a2;
- (BOOL)isFreehandDrawing;
- (id)infosToObserveForAttachedInfo;
- (id)allNestedChildrenInfosForWrap;
- (id)initWithSpacerShapeAndContext:(id)a0 geometry:(id)a1;
- (BOOL)shouldHaveFakeShapeInfoForPersistingEmptyGroup;
- (void)setFreehandDrawingSpacerShape:(id)a0;
- (BOOL)isEffectivelyEmpty;
- (id)tsaxTypeDescription;

@end

@class TSDShapeInfo;

@interface TSDFreehandDrawingInfo : TSDGroupInfo

@property (readonly, nonatomic) TSDShapeInfo *freehandDrawingSpacerShape;
@property (nonatomic) double opacity;

- (id)typeName;
- (Class)layoutClass;
- (void).cxx_destruct;
- (id)childEnumerator;
- (id)copyWithContext:(id)a0;
- (Class)repClass;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (id)animationFilters;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (BOOL)allowsCaption;
- (BOOL)allowsTitle;
- (id)childEnumeratorForUserSearch;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)allNestedChildrenInfosForWrap;
- (id)infosToObserveForAttachedInfo;
- (id)initWithSpacerShapeAndContext:(id)a0 geometry:(id)a1;
- (BOOL)isEffectivelyEmpty;
- (BOOL)isFreehandDrawing;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1 upgradeDOLC:(BOOL)a2;
- (void)setFreehandDrawingSpacerShape:(id)a0;
- (BOOL)shouldHaveFakeShapeInfoForPersistingEmptyGroup;
- (id)tsaxTypeDescription;

@end

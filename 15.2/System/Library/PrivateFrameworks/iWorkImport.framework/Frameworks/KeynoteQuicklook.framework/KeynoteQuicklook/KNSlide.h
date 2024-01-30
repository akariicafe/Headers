@class KNTemplateSlide, NSString, KNNoteInfo, NSMutableSet;

@interface KNSlide : KNAbstractSlide <TSKModel, TSKTransformableObject> {
    KNTemplateSlide *_templateSlide;
}

@property (retain, nonatomic) KNTemplateSlide *templateSlide;
@property (retain, nonatomic) KNNoteInfo *note;
@property (readonly, nonatomic) BOOL slideObjectsLayerWithTemplate;
@property (readonly, nonatomic) NSMutableSet *infosUsingObjectPlaceholderGeometry;
@property (readonly, nonatomic) BOOL areInfosUsingObjectPlaceholderGeometry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)blankSlideWithSlideNode:(id)a0 templateSlide:(id)a1 andShow:(id)a2;

- (void).cxx_destruct;
- (void)acceptVisitor:(id)a0;
- (id)childEnumerator;
- (id)infosToDisplay;
- (id)packageLocator;
- (BOOL)isComponentRoot;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)insertDrawables:(id)a0 atIndex:(unsigned long long)a1 dolcContext:(id)a2;
- (BOOL)isTemplateSlide;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)removeDrawable:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)defaultTitlePlaceholder;
- (id)defaultBodyPlaceholder;
- (id)defaultSlideNumberPlaceholder;
- (id)paragraphIndexesOfTopLevelBullets;
- (id)initWithSlideNode:(id)a0 templateSlide:(id)a1 andShow:(id)a2;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)setToTemplateSlide:(id)a0;
- (void)setTemplateSlide:(id)a0 resetTemplateSlideBackgroundObjects:(BOOL)a1;
- (BOOL)p_oneOrMoreDrawablesMayHaveImplicitBuildEventsInDrawables:(id)a0;
- (void)removeInfoUsingObjectPlaceholderGeometry:(id)a0;
- (void)p_checkTemplateSlide;
- (BOOL)p_urlIsSlideSpecific:(id)a0;
- (id)p_slideNodeUUIDStringFromURL:(id)a0;
- (void)addInfoUsingObjectPlaceholderGeometry:(id)a0;
- (void)setInfosUsingObjectPlaceholderGeometry:(id)a0;
- (id)infoCorrespondingToTemplateSlideInfo:(id)a0;
- (BOOL)isNoteSelectionPath:(id)a0;
- (void)updateSlideSpecificLinkMapForInfo:(id)a0 newHyperlink:(id)a1;
- (void)updateSlideSpecificHyperlinkMapForStorage:(id)a0 oldHyperlink:(id)a1 newHyperlink:(id)a2;
- (void)removeMapForStorage:(id)a0 forHyperlink:(id)a1;
- (void)addMapForStorage:(id)a0 forHyperlink:(id)a1;

@end

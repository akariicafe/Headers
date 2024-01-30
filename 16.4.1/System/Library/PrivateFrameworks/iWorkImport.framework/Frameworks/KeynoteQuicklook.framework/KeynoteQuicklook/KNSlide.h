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

- (void)acceptVisitor:(id)a0;
- (void).cxx_destruct;
- (id)childEnumerator;
- (id)infosToDisplay;
- (BOOL)isComponentRoot;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (id)packageLocator;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (BOOL)isTemplateSlide;
- (void)removeDrawable:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)addInfoUsingObjectPlaceholderGeometry:(id)a0;
- (void)addMapForStorage:(id)a0 forHyperlink:(id)a1;
- (id)defaultBodyPlaceholder;
- (id)defaultSlideNumberPlaceholder;
- (id)defaultTitlePlaceholder;
- (id)infoCorrespondingToTemplateSlideInfo:(id)a0;
- (id)initWithSlideNode:(id)a0 templateSlide:(id)a1 andShow:(id)a2;
- (void)insertDrawables:(id)a0 atIndex:(unsigned long long)a1 dolcContext:(id)a2;
- (BOOL)isNoteSelectionPath:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)p_checkTemplateSlide;
- (BOOL)p_oneOrMoreDrawablesMayHaveImplicitBuildEventsInDrawables:(id)a0;
- (id)p_slideNodeUUIDStringFromURL:(id)a0;
- (BOOL)p_urlIsSlideSpecific:(id)a0;
- (id)paragraphIndexesOfTopLevelBullets;
- (void)removeInfoUsingObjectPlaceholderGeometry:(id)a0;
- (void)removeMapForStorage:(id)a0 forHyperlink:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)setInfosUsingObjectPlaceholderGeometry:(id)a0;
- (void)setTemplateSlide:(id)a0 resetTemplateSlideBackgroundObjects:(BOOL)a1;
- (void)setToTemplateSlide:(id)a0;
- (void)updateSlideSpecificHyperlinkMapForStorage:(id)a0 oldHyperlink:(id)a1 newHyperlink:(id)a2;
- (void)updateSlideSpecificLinkMapForInfo:(id)a0 newHyperlink:(id)a1;

@end

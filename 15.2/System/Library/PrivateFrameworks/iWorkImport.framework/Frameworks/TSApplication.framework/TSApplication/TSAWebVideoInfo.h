@class TSDAttribution, NSString, NSSet, NSURL, TSPData, TSSStyle, TSDMediaStyle;

@interface TSAWebVideoInfo : TSDDrawableInfo <TSDFittingOnInsertion, TSDMixing, TSDDrawableInfoCustomUnarchivingSubclassProviding, TSDStyleOwning, TSSStyleClient> {
    TSDMediaStyle *_style;
    NSString *_URLString;
    TSPData *_posterImageData;
    BOOL _definedPosterImageData;
    BOOL _definedAttribution;
    struct CGSize { double width; double height; } _archivedImageNaturalSize;
}

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) TSPData *posterImageData;
@property (copy, nonatomic) TSDAttribution *attribution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) TSSStyle *style;
@property (readonly, nonatomic) Class styleClass;
@property (readonly, nonatomic) NSSet *referencedStyles;

+ (Class)drawableInfoSubclassForClass:(Class)a0 unarchiver:(id)a1;
+ (id)p_defaultArchivedImageStyleWithContext:(id)a0;

- (BOOL)isSelectable;
- (id)typeName;
- (unsigned int)elementKind;
- (void).cxx_destruct;
- (void)acceptVisitor:(id)a0;
- (Class)repClass;
- (id)copyWithContext:(id)a0;
- (Class)layoutClass;
- (BOOL)allowsTitle;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)a0;
- (BOOL)supportsHyperlinks;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (id)animationFilters;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (BOOL)supportsParentRotation;
- (void)setPosterImageData:(id)a0;
- (void)didInitFromSOS;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (BOOL)allowsCaption;
- (id)initWithContext:(id)a0 geometry:(id)a1 style:(id)a2 URL:(id)a3 posterImageData:(id)a4;
- (void)takeGeometryFromReplacedWebVideoInfo:(id)a0;
- (id)p_attributedStringRepresentation;
- (id)initWithContext:(id)a0 geometry:(id)a1 URL:(id)a2 posterImageData:(id)a3;
- (void)scaleDownSizeToFitWithinSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)wantsCounterRotationWhenNotSupportingParentRotationInRotatedParent;
- (void)takePropertiesFromReplacedWebVideoInfo:(id)a0;
- (id)typesToPromiseWhenCopyingSingleDrawable;
- (BOOL)wantsStandardTypesInAdditionToTypesToPromiseWhenDraggingSingleDrawable;
- (id)promisedDataForType:(id)a0;

@end

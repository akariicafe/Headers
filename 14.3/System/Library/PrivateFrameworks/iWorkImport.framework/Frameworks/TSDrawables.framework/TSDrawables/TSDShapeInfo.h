@class NSString, TSDInfoGeometry, TSDShapeStyle, TSDPathSource, NSObject, TSDFill, TSDLineEnd, TSPObject;
@protocol TSDInfo, TSDOwningAttachment;

@interface TSDShapeInfo : TSDStyledInfo <TSDReducibleImageContainer, TSDMixing, TSKSearchable, TSDInfoWithPathSource, TSDCompatibilityAwareMediaContainer> {
    TSDShapeStyle *mStyle;
}

@property (retain, nonatomic) TSDPathSource *pathSource;
@property (readonly, nonatomic) TSDShapeStyle *shapeStyle;
@property (copy, nonatomic) TSDFill *fill;
@property (copy, nonatomic) TSDLineEnd *headLineEnd;
@property (copy, nonatomic) TSDLineEnd *tailLineEnd;
@property (readonly, nonatomic) BOOL supportsTextInset;
@property (readonly, nonatomic) BOOL supportsShrinkTextToFit;
@property (nonatomic) double strokePatternOffsetDistance;
@property (readonly, nonatomic) BOOL isTreatedAsFillForFreehandDrawing;
@property (readonly, nonatomic) BOOL isFreehandDrawingSpacerShape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (nonatomic) NSObject<TSDInfo> *parentInfo;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;

- (BOOL)needsDownload;
- (id)objectForProperty:(int)a0;
- (void).cxx_destruct;
- (id)style;
- (id)copyWithContext:(id)a0;
- (BOOL)isLine;
- (void)setStyle:(id)a0;
- (Class)repClass;
- (Class)layoutClass;
- (void)acceptVisitor:(id)a0;
- (BOOL)allowsTitle;
- (void)setValuesForProperties:(id)a0;
- (id)animationFilters;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (id)initWithContext:(id)a0 geometry:(id)a1 style:(id)a2 pathSource:(id)a3;
- (struct CGSize { double x0; double x1; })targetSizeForImageData:(id)a0 associatedHint:(id)a1;
- (id)initWithContext:(id)a0 geometry:(id)a1 style:(id)a2;
- (Class)styleClass;
- (BOOL)pathIsOpen;
- (void)loadFromArchive:(const struct ShapeArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct DrawableArchive *x4; struct Reference *x5; struct PathSourceArchive *x6; struct LineEndArchive *x7; struct LineEndArchive *x8; float x9; } *)a0 unarchiver:(id)a1;
- (BOOL)isValidShapeToUnarchive;
- (void)saveToArchive:(struct ShapeArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct DrawableArchive *x4; struct Reference *x5; struct PathSourceArchive *x6; struct LineEndArchive *x7; struct LineEndArchive *x8; float x9; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (BOOL)allowsCaption;
- (BOOL)canCopyData;
- (BOOL)isAllowedInFreehandDrawings;
- (long long)mediaCompatibilityTypeForData:(id)a0 associatedHint:(id)a1;
- (BOOL)shouldBeIgnoredWhenCopying;
- (BOOL)isTailEndOnLeftFromTemporaryLayoutForPasteboard;
- (BOOL)allowsParentGroupToBeResizedWithoutAspectRatioLock;
- (BOOL)shouldFlipLineEndsForStyle:(id)a0 isStyleTailEndOnLeft:(int)a1;
- (BOOL)isOpenPath;
- (BOOL)isAutosizingTextBox;
- (void)p_correctLineSegmentGeometry;
- (void)p_correctNearZeroWidthLines;

@end

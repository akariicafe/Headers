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

- (id)style;
- (id)typeName;
- (id)objectForProperty:(int)a0;
- (void)setStyle:(id)a0;
- (void).cxx_destruct;
- (BOOL)needsDownload;
- (void)acceptVisitor:(id)a0;
- (Class)repClass;
- (BOOL)isLine;
- (id)copyWithContext:(id)a0;
- (Class)layoutClass;
- (BOOL)allowsTitle;
- (void)setValuesForProperties:(id)a0;
- (BOOL)supportsHyperlinks;
- (id)animationFilters;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (id)initWithContext:(id)a0 geometry:(id)a1 style:(id)a2 pathSource:(id)a3;
- (struct CGSize { double x0; double x1; })targetSizeForImageData:(id)a0 associatedHint:(id)a1;
- (id)initWithContext:(id)a0 geometry:(id)a1 style:(id)a2;
- (Class)styleClass;
- (BOOL)pathIsOpen;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (BOOL)isValidShapeToUnarchive;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (BOOL)allowsCaption;
- (BOOL)canCopyData;
- (BOOL)isAllowedInFreehandDrawings;
- (long long)mediaCompatibilityTypeForData:(id)a0 associatedHint:(id)a1;
- (id)p_shapeLibraryUserDefinedName;
- (id)p_nameFromPathSource;
- (BOOL)shouldBeIgnoredWhenCopying;
- (BOOL)isTailEndOnLeftFromTemporaryLayoutForPasteboard;
- (BOOL)allowsParentGroupToBeResizedWithoutAspectRatioLock;
- (BOOL)shouldFlipLineEndsForStyle:(id)a0 isStyleTailEndOnLeft:(int)a1;
- (BOOL)isOpenPath;
- (BOOL)isAutosizingTextBox;
- (void)p_recoverFromMissingStyleDuringUnarchivingIfNeededFromVersion:(unsigned long long)a0;
- (void)p_correctLineSegmentGeometry;
- (void)p_correctNearZeroWidthLines;

@end

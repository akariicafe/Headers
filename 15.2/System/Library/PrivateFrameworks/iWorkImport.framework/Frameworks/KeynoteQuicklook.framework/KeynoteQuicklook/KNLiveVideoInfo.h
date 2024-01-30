@class KNLiveVideoSource, NSString, NSUUID, TSPData, TSDMediaStyle;

@interface KNLiveVideoInfo : TSDStyledInfo <TSDDrawableInfoCustomUnarchivingSubclassProviding, TSDMixing> {
    TSDMediaStyle *_style;
    double _scale;
    struct CGPoint { double x; double y; } _normalizedOffset;
    long long _maskKind;
    double _maskCornerRadius;
    TSPData *_archivedMoviePosterImageData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSUUID *i_sourceId;
@property (nonatomic) long long i_archivedMaskKind;
@property (retain, nonatomic) KNLiveVideoSource *source;
@property (nonatomic) double scale;
@property (nonatomic) struct CGPoint { double x0; double x1; } normalizedOffset;
@property (nonatomic) long long maskKind;
@property (readonly, nonatomic) long long effectiveMaskKind;
@property (nonatomic) double maskCornerRadius;
@property (nonatomic) BOOL isPlaceholder;

+ (id)i_makeArchivedMoviePosterImageDataWithContext:(id)a0;
+ (Class)drawableInfoSubclassForClass:(Class)a0 unarchiver:(id)a1;

- (id)style;
- (id)typeName;
- (unsigned int)elementKind;
- (id)objectForProperty:(int)a0;
- (void)setStyle:(id)a0;
- (void).cxx_destruct;
- (void)acceptVisitor:(id)a0;
- (Class)repClass;
- (id)copyWithContext:(id)a0;
- (Class)layoutClass;
- (BOOL)containsProperty:(int)a0;
- (BOOL)allowsTitle;
- (int)intValueForProperty:(int)a0;
- (double)doubleValueForProperty:(int)a0;
- (id)presetKind;
- (id)animationFilters;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (id)initWithContext:(id)a0 geometry:(id)a1 style:(id)a2;
- (Class)styleClass;
- (id)styleIdentifierTemplateForNewPreset;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (BOOL)isAllowedInGroups;
- (void)p_updateSlideNodeLiveVideoSourceUUIDs;
- (long long)effectiveMaskKindForGeometry:(id)a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (BOOL)allowsCaption;
- (BOOL)shouldShowInPrint;
- (id)defaultDescriptiveName;
- (BOOL)supportsUserInteractionWhenVisibleInAnimation;

@end

@class PVEffectTimedPropertiesComponent, NSMutableDictionary, NSDictionary, NSString, NSLock, NSMutableArray;

@interface PVEffect : NSObject <PVEffectHitArea, PVEffectTimeline, PVEffectTransformable, PVEffectTimedProperties, PVEffectTextual, PVEffectTranscript, NSSecureCoding, NSCopying> {
    NSString *_effectID;
    NSString *_effectType;
    NSString *_displayName;
    NSMutableDictionary *_inspectableProperties;
    NSLock *_inspectablePropertiesLock;
    void *_loadCount;
    NSMutableArray *_components;
    PVEffectTimedPropertiesComponent *_timedPropertiesComponent;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL loopTimeOverrideEnabled;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } loopTimeOverride;
@property (nonatomic) BOOL forceDisableLoop;
@property (nonatomic) BOOL forceDisableBuildAnimation;
@property (nonatomic) BOOL useLocalLoopTime;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } effectRange;
@property (nonatomic) BOOL conformToInputAspect;
@property (copy, nonatomic) NSDictionary *inspectableProperties;
@property (retain, nonatomic) NSMutableDictionary *effectParameters;
@property (retain, nonatomic) NSDictionary *contentProperties;
@property (nonatomic) BOOL isPreview;
@property (nonatomic) BOOL isRecording;
@property (nonatomic) BOOL isInInteractiveMode;
@property (nonatomic) BOOL shouldDisableFadeOut;
@property (nonatomic, getter=isHidden) BOOL hidden;

+ (void)setInteractiveMode:(BOOL)a0;
+ (void)initEffectRegistry;
+ (id)newEffectWithID:(id)a0;
+ (id)registeredEffectIDsForEffectType:(id)a0;
+ (BOOL)effectIDIsNone:(id)a0;
+ (id)effectTypeForEffectID:(id)a0;
+ (id)displayNameForEffectID:(id)a0;
+ (id)shadowFromAttributedString:(id)a0 defaultAttributes:(id)a1;
+ (double)textHeightFromAttributedString:(id)a0 defaultAttributes:(id)a1 scale:(double)a2;
+ (long long)verticalAlignmentFromAttributedString:(id)a0 defaultAttributes:(id)a1;
+ (double)xOffsetForTextTrackingFromAttributedString:(id)a0;
+ (void)initEffectRegistryWithHostDelegate:(id)a0;
+ (void)cleanupEffectsCache;
+ (void)noteApplicationDidReceiveMemoryWarning;
+ (BOOL)isAllCapsFromAttributes:(id)a0;
+ (double)baselineOffsetFromAttributedString:(id)a0;
+ (void)modifyAttributedStringByApplyingSubstituteFont:(id)a0 attributes:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
+ (void)modifyAttributedStringByAdjustingKerning:(id)a0 attributes:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 scale:(double)a3;
+ (void)modifyAttributedStringByAdjustingOutline:(id)a0 attributes:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 scale:(double)a3;
+ (void)modifyAttributedStringByAdjustingFontSize:(id)a0 scale:(double)a1;
+ (void)modifyAttributedStringByAdjustingForNegativeLineSpacing:(id)a0 scale:(double)a1;
+ (void)modifyAttributedStringByAdjustingShadow:(id)a0 scale:(double)a1 rotation:(double)a2;
+ (void)modifyAttributedStringByAdjustingFont:(id)a0 toFitSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)effectIDIsRegistered:(id)a0;
+ (id)propertiesForEffect:(id)a0;
+ (id)categoryForEffectID:(id)a0;
+ (void)registerEffectClass:(Class)a0 forEffectID:(id)a1 withProperties:(id)a2;
+ (void)registerEffects;
+ (void)handleApplicationWillTerminate;
+ (void)willTerminate:(id)a0;
+ (void)handleCleanupEffectsCache;
+ (void)handleApplicationDidReceiveMemoryWarning;
+ (void)cleanupEffectsSingletons;
+ (BOOL)isInteractiveMode;
+ (id)newEffectWithURL:(id)a0;
+ (id)newEffectWithData:(id)a0;
+ (void)clearPreviewStats;
+ (id)attributeForName:(id)a0 fromAttributedString:(id)a1 defaultAttributes:(id)a2;
+ (double)textHeightFromAttributedString:(id)a0 defaultAttributes:(id)a1;
+ (void)modifyAttributedStringByAdjustingShadow:(id)a0 effectTransform:(id)a1;
+ (void)modifyAttributedStringByAdjustingOutline:(id)a0 attributes:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
+ (void)modifyAttributedStringByAdjustingForNegativeLineSpacing:(id)a0;
+ (void)runDeferredRegistration;
+ (void)ensureEffectsRegistered;
+ (id)_effectRegistry;
+ (id)_effectRegistryForLookup;
+ (id)_registryEntryForEffectID:(id)a0;
+ (id)allRegisteredEffectIDs;
+ (Class)classForEffectID:(id)a0;
+ (void)appFinishedLaunching:(id)a0;
+ (void)deferEffectRegistrationForClass:(Class)a0;
+ (id)userVisibleEffectIDs;
+ (id)registeredEffectIDsForEffectTypes:(id)a0;
+ (id)firstRegisteredEffectIDContainingSubstring:(id)a0;
+ (id)registeredEffectIDsForClass:(Class)a0;
+ (id)displayNameForEffectType:(id)a0;
+ (id)themeForEffectID:(id)a0;
+ (id)descriptionForEffectID:(id)a0;
+ (BOOL)isVideoForEffectID:(id)a0;
+ (id)defaultVideoTransitionEffectID;
+ (id)_registeredEffectClasses;
+ (void)_registerBuiltInEffects;
+ (void)_registerEffectsInBundle:(id)a0 atPath:(id)a1;
+ (void)noteApplicationWillTerminate;

- (void)releaseResources;
- (id)displayName;
- (BOOL)isReady;
- (void)encodeWithCoder:(id)a0;
- (int)origin;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)effectType;
- (int)orientation;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id)categoryName;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)setTransform:(id)a0;
- (struct CGSize { double x0; double x1; })outputSize;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })timelineDuration;
- (void)setTranscriptionText:(id)a0;
- (id)cameraTransform;
- (id)effectID;
- (void)removeAllTimedPropertiesDelegates;
- (void)addTimedPropertiesDelegate:(id)a0 userContext:(id)a1;
- (float)proxyRenderScale;
- (id)initWithEffectID:(id)a0;
- (BOOL)isTextFlipped;
- (BOOL)supportsFlippingText;
- (BOOL)supportsOrientation;
- (struct PVCGPointQuad { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; })cornersAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forcePosterFrame:(BOOL)a1 includeDropShadow:(BOOL)a2 scale:(struct CGPoint { double x0; double x1; })a3 viewSize:(struct CGSize { double x0; double x1; })a4 viewOrigin:(int)a5;
- (BOOL)bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 forcePosterFrame:(BOOL)a2 includeDropShadow:(BOOL)a3 includeMasks:(BOOL)a4;
- (id)transformAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forcePosterFrame:(BOOL)a1 includeTransformAnimation:(BOOL)a2 viewSize:(struct CGSize { double x0; double x1; })a3 viewOrigin:(int)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })outputROI;
- (id)hitAreaPointsAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forcePosterFrame:(BOOL)a1 includeDropShadow:(BOOL)a2 scale:(struct CGPoint { double x0; double x1; })a3 viewSize:(struct CGSize { double x0; double x1; })a4 viewOrigin:(int)a5;
- (id)defaultAttributedString:(unsigned long long)a0;
- (struct PVCGPointQuad { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; })textCornersAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 index:(unsigned long long)a1 forcePosterFrame:(BOOL)a2 includeDropShadow:(BOOL)a3 scale:(struct CGPoint { double x0; double x1; })a4 viewSize:(struct CGSize { double x0; double x1; })a5 viewOrigin:(int)a6;
- (id)textEditingBoundsAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forcePosterFrame:(BOOL)a1 useParagraphBounds:(BOOL)a2 includeDropShadow:(BOOL)a3 includeMasks:(BOOL)a4;
- (void)beginTextEditing;
- (void)endTextEditing;
- (double)topLevelOpacity;
- (BOOL)resourcesAreReady;
- (BOOL)loadResources;
- (void)loadResourcesOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)updateInspectableProperties:(id)a0;
- (id)cameraProjection;
- (void)setInspectableProperty:(id)a0 forKey:(id)a1;
- (id)transformAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forcePosterFrame:(BOOL)a1 viewSize:(struct CGSize { double x0; double x1; })a2 viewOrigin:(int)a3;
- (id)textTransformsAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forcePosterFrame:(BOOL)a1 viewSize:(struct CGSize { double x0; double x1; })a2 viewOrigin:(int)a3;
- (void)addEntriesToInspectableProperties:(id)a0;
- (BOOL)loadEffect;
- (void)updateInspectableProperties;
- (struct HGRef<HGNode> { struct HGNode *x0; })previewHGNodeForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 inputHGNode:(struct HGRef<HGNode> { struct HGNode *x0; })a1 outputSize:(struct CGSize { double x0; double x1; })a2 renderer:(void *)a3;
- (struct HGRef<HGNode> { struct HGNode *x0; })hgNodeForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 inputs:(const void *)a1 renderer:(const void *)a2 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a3;
- (void)releaseEffect;
- (void)assertInspectablePropertiesAreLocked;
- (void)assertInspectablePropertiesAreUnlocked;
- (id)textEditingBounds:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)textTransformsAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forcePosterFrame:(BOOL)a1 includeTransformAnimation:(BOOL)a2 viewSize:(struct CGSize { double x0; double x1; })a3 viewOrigin:(int)a4;
- (void)beginEditingTextAtIndex:(unsigned int)a0;
- (void)endEditingTextAtIndex:(unsigned int)a0;
- (BOOL)isTitleCard;
- (BOOL)hasTimedPropertiesDelegates;
- (BOOL)supportsExtendedRangeInputs;
- (id)effectDescription;
- (BOOL)isTranscription;
- (void)clearTranscription;
- (void)resetToDefaultTranscriptionForLocaleID:(id)a0;
- (BOOL)transcriptionHitTest:(struct CGPoint { double x0; double x1; })a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })transcriptionDuration;
- (void)runWithInspectableProperties:(id /* block */)a0;
- (id)inspectablePropertyForKey:(id)a0;
- (void)setTopLevelGroupTransform:(id)a0;
- (void)enableCameraOverride:(id)a0 projection:(id)a1;
- (void)disableCameraOverride;
- (BOOL)isCameraOverrideEnabled;
- (id)contentRegistryPropertyForKey:(id)a0;
- (id)initWithContentID:(id)a0 andDictionary:(id)a1;
- (unsigned int)timelineDurationInFrames;
- (double)timelineDurationInSeconds;
- (double)timelineFrameRate;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })timelineFrameDuration;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })timelineLastFrame;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })componentTimeFromTimelineTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })timelineTimeFromComponentTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })componentTimeRangeFromTimelineTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timelineTimeRangeFromComponentTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)timelineMarkers;
- (id)timelineMarkersOfType:(int)a0;
- (id)posterFrameMarker;
- (void)_configureComponents;
- (id)contentRegistryProperties;
- (id)contentPropertyForKey:(id)a0;
- (void)_copyWithZone:(struct _NSZone { } *)a0 into:(id)a1;
- (void)_postInit:(id)a0;
- (void)_decodeFromCoder:(id)a0 into:(id)a1;
- (void)loadEffectOnQueue:(id)a0 completion:(id /* block */)a1;
- (id)descriptionOfInspectableProperties;
- (id)contentBundle;
- (BOOL)hasBuiltInEnvironment;
- (BOOL)usesDefaultChannelDataEncoding;
- (BOOL)writeDefaultChannels;
- (void)applyInspectableProperties;
- (BOOL)applyTimedPropertiesForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)removeTimedPropertiesDelegate:(id)a0;
- (id)timedPropertiesDelegates;
- (BOOL)hasTimedPropertiesDelegate:(id)a0;
- (id)userContextForTimedPropertiesDelegate:(id)a0;
- (void)updateLiveTitlePickerLoopTime:(BOOL)a0;
- (BOOL)hasAllNecessaryResources;

@end

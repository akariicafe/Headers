@class NTKWellnessEntryModel, NSString, NTKUtilityComplicationFactory, CLKDevice, NSObject;
@protocol NTKActivityFaceViewFactoryDelegate, OS_dispatch_source;

@interface NTKActivityFaceViewFactory : NSObject <NTKUtilityComplicationFactoryDelegate, NTKWellnessTimelineModelSubscriber> {
    NTKWellnessEntryModel *_nowEntryModel;
    BOOL _wantsUpdateNowEntryModelNextLive;
    double _lastWristRaiseTime;
    double _wristRaiseTimoutDuration;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
}

@property (readonly, nonatomic) BOOL analog;
@property (readonly, nonatomic) CLKDevice *device;
@property (retain, nonatomic) NTKUtilityComplicationFactory *complicationFactory;
@property (nonatomic) BOOL hasBeenLiveOrOnDeck;
@property (nonatomic) BOOL isLoadingData;
@property (nonatomic) BOOL showsCanonicalContent;
@property (nonatomic) BOOL showsLockedContent;
@property (weak, nonatomic) id<NTKActivityFaceViewFactoryDelegate> delegate;
@property (nonatomic) long long dataMode;
@property (readonly, nonatomic) NTKWellnessEntryModel *currentEntryModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)prelaunchApplicationIdentifiers;
+ (id)userActiveEnergyUnit;
+ (id)sharedRingsViewRenderer;
+ (void)prewarmForDevice:(id)a0;
+ (BOOL)userActiveEnergyIsCalories;

- (void).cxx_destruct;
- (void)dealloc;
- (long long)complicationPickerStyleForSlot:(id)a0;
- (void)configureComplicationView:(id)a0 forSlot:(id)a1;
- (unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)a0;
- (id)keylineViewForComplicationSlot:(id)a0;
- (id)complicationPickerKeylineViewForComplicationSlot:(id)a0;
- (void)loadLayoutRules;
- (id)newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2;
- (void)prepareWristRaiseAnimation;
- (void)performWristRaiseAnimation;
- (long long)keylineStyleForComplicationSlot:(id)a0;
- (id)curvedMaskForSlot:(id)a0;
- (id)_utilityComplicationSlots;
- (long long)_utilitySlotForSlot:(id)a0;
- (double)_keylinePaddingForState:(long long)a0;
- (double)_edgeGapForState:(long long)a0;
- (double)_lisaGapForState:(long long)a0;
- (BOOL)slotUsesCurvedText:(long long)a0;
- (id)_colorComplicationSlots;
- (id)_slotForUtilitySlot:(long long)a0;
- (id)utilityDateComplicationFontForDateStyle:(unsigned long long)a0;
- (void)loadLayoutRulesForFaceView:(id)a0;
- (id)_complicationSlots;
- (void)curvedCircleRadius:(double *)a0 centerAngle:(double *)a1 maxAngularWidth:(double *)a2 circleCenter:(struct CGPoint { double x0; double x1; } *)a3 interior:(BOOL *)a4 forSlot:(id)a5;
- (id)initForAnalog:(BOOL)a0 forDevice:(id)a1;
- (void)launchActivityApp;
- (id)faceView:(id)a0 newLegacyViewForComplication:(id)a1 family:(long long)a2 slot:(id)a3;
- (void)faceView:(id)a0 configureComplicationView:(id)a1 forSlot:(id)a2;
- (long long)faceView:(id)a0 legacyLayoutOverrideforComplicationType:(unsigned long long)a1 slot:(id)a2;
- (unsigned long long)faceView:(id)a0 keylineLabelAlignmentForComplicationSlot:(id)a1;
- (double)faceView:(id)a0 keylineCornerRadiusForComplicationSlot:(id)a1;
- (id)_dateComplicationFontForStyle:(unsigned long long)a0;
- (void)_configureComplicationFactory:(id)a0;
- (void)_handleActiveEnergyUnitChange;
- (void)_loadCurrentEntryForce:(BOOL)a0;
- (void)_updateRingsForCurrentEntryModelAnimated:(BOOL)a0;
- (void)_loadCurrentEntry;
- (id)_canonicalEntryModel;
- (void)_resetWristRaiseAnimationTimeout;
- (BOOL)shouldPerformFromZeroWristRaise;
- (BOOL)_slotUsesCurvedText:(long long)a0;
- (void)wellnessTimeLineModelCurrentEntryModelUpdated:(id)a0;
- (id)debugStringForEntry:(id)a0;

@end

@class NSHashTable, NSString, NSArray, NSDate, CLKDevice, NTKFaceConfiguration, NSDictionary, NSMutableDictionary, NSNumber;
@protocol NTKFaceComplicationConfiguration;

@interface NTKFace : NSObject <NSSecureCoding, NSCopying, NTKEditModeMapping> {
    NSHashTable *_fvcObservers;
    NSHashTable *_observers;
    NSDictionary *_complicationSlotDescriptors;
    NSMutableDictionary *_selectedSlotsByEditMode;
    BOOL _suppressingConfigurationChangeNotifications;
    BOOL _configurationChangedWhileSuppressingNotifications;
    BOOL _configurationWasModifiedForThisDevice;
    BOOL _resourceDirectoryIsOwned;
    NSString *_cachedDefaultName;
    NSArray *_cachedDynamicEditOptions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<NTKFaceComplicationConfiguration> complicationConfiguration;
@property (nonatomic) long long mostRecentEditMode;
@property (nonatomic) BOOL beingEdited;
@property (readonly, nonatomic) NSArray *editModes;
@property (readonly, nonatomic, getter=isEditable) BOOL editable;
@property (readonly, nonatomic, getter=isSingular) BOOL singular;
@property (readonly, nonatomic, getter=isUsingConfigurationModifiedForThisDevice) BOOL usingConfigurationModifiedForThisDevice;
@property (readonly, nonatomic) long long editModeForCustomEditViewController;
@property (readonly, nonatomic) long long faceStyle;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) CLKDevice *device;
@property (readonly, nonatomic) NTKFaceConfiguration *configuration;
@property (readonly, nonatomic) NSString *resourceDirectory;
@property (readonly, nonatomic) BOOL editOptionsPrepared;
@property (nonatomic) long long origin;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *lastEditedDate;
@property (nonatomic) long long editedState;
@property (readonly, nonatomic) NSNumber *numberOfGizmoEdits;
@property (readonly, nonatomic) BOOL hasGizmoEdits;
@property (readonly, nonatomic) NSNumber *numberOfCompanionEdits;
@property (readonly, nonatomic) BOOL hasCompanionEdits;
@property (nonatomic) BOOL isLibraryFace;
@property (readonly, nonatomic) NSString *dailySnapshotKey;
@property (readonly, nonatomic) BOOL wantsUnadornedSnapshot;
@property (readonly, nonatomic) NSString *unadornedSnapshotKey;
@property (readonly, nonatomic) BOOL complicationExistenceInvalidatesSnapshot;
@property (copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (Class)_faceClassForStyle:(long long)a0;
+ (id)defaultFaceOfStyle:(long long)a0 forDevice:(id)a1;
+ (BOOL)_customEditModeIsRows:(long long)a0 forDevice:(id)a1;
+ (id)_complicationSlotDescriptors;
+ (id)_defaultSelectedComplicationSlotForDevice:(id)a0;
+ (id)_orderedComplicationSlots;
+ (id)_localizedNameOverrideForCustomEditMode:(long long)a0 forDevice:(id)a1;
+ (id)_richComplicationSlotsForDevice:(id)a0;
+ (BOOL)_customEditMode:(long long)a0 hasActionForOption:(id)a1 forDevice:(id)a2;
+ (void)enumerateComplicationSlotsWithBlock:(id /* block */)a0;
+ (id)fixedComplicationSlotsForDevice:(id)a0;
+ (id)richComplicationSlotsForDevice:(id)a0;
+ (id)_initialDefaultComplicationForSlot:(id)a0 forDevice:(id)a1;
+ (id)_dateComplicationSlotForDevice:(id)a0;
+ (unsigned long long)_dateComplicationSlotSupportedStylesForDevice:(id)a0;
+ (BOOL)_customEditModeIsShowSeconds:(long long)a0 forDevice:(id)a1;
+ (BOOL)isRestrictedForDevice:(id)a0;
+ (id)monogramSlotForDevice:(id)a0;
+ (BOOL)customEditMode:(long long)a0 hasActionForOption:(id)a1 forDevice:(id)a2;
+ (id)faceWithJSONObjectRepresentation:(id)a0 forDevice:(id)a1 forMigration:(BOOL)a2 allowFallbackFromInvalidFaceStyle:(BOOL)a3;
+ (id)complicationConfiguration;
+ (id)_linkedResourceRootDirectory;
+ (BOOL)_customEditModeIsColor:(long long)a0 forDevice:(id)a1;
+ (BOOL)_customEditModeDeterminesDynamicSections:(long long)a0 forDevice:(id)a1;
+ (id)localizedNameForCustomEditMode:(long long)a0 forDevice:(id)a1;
+ (BOOL)customEditModeIsColor:(long long)a0 forDevice:(id)a1;
+ (BOOL)customEditModeIsRows:(long long)a0 forDevice:(id)a1;
+ (BOOL)customEditModeIsShowSeconds:(long long)a0 forDevice:(id)a1;
+ (BOOL)customEditModeDeterminesDynamicSections:(long long)a0 forDevice:(id)a1;
+ (void)enumerateComplicationSlots:(id)a0 withBlock:(id /* block */)a1;
+ (id)_monogramComplicationSlotForDevice:(id)a0;
+ (id)possibleComplicationTypesForSlot:(id)a0;
+ (id)defaultFaceOfStyle:(long long)a0 forDevice:(id)a1 initCustomization:(id /* block */)a2;
+ (unsigned long long)maximumRemoteComplicationsOnAnyFaceForDevice:(id)a0;
+ (id)_slotsForCustomEditMode:(long long)a0 forDevice:(id)a1;
+ (id)faceWithJSONObjectRepresentation:(id)a0 forDevice:(id)a1;
+ (BOOL)_complication:(id)a0 isValidForSlot:(id)a1 forDevice:(id)a2;
+ (id)_defaultSelectedSlotForCustomEditMode:(long long)a0 forDevice:(id)a1;
+ (BOOL)_isInternalOnlyForDevice:(id)a0;
+ (id)availableInternalFaceStylesForDevice:(id)a0;
+ (id)bundledFaceWithIdentifier:(id)a0 forDevice:(id)a1 initCustomization:(id /* block */)a2;
+ (unsigned long long)maximumRemoteComplicationsOnAnyFace;
+ (id)dateSlotForDevice:(id)a0;
+ (BOOL)isFaceStyleAvailableInternal:(long long)a0 forDevice:(id)a1;
+ (id)PPTBlankFace;
+ (id)defaultFaceFromFaceDescriptor:(id)a0 forDevice:(id)a1;

- (void)prepareForDeletion;
- (void)_commonInit;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeObserver:(id)a0;
- (id)deepCopy;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (id)_defaultName;
- (id)initWithCoder:(id)a0;
- (id)faceDescription;
- (BOOL)_allowsEditing;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)applyConfiguration:(id)a0;
- (void)clearMetrics;
- (void)selectOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_setFaceGalleryComplicationTypesForSlots:(id)a0;
- (void)setComplication:(id)a0 forSlot:(id)a1;
- (Class)_optionClassForCustomEditMode:(long long)a0;
- (id)_customEditModes;
- (id)_defaultOptionForCustomEditMode:(long long)a0 slot:(id)a1;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)_optionAtIndex:(unsigned long long)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (unsigned long long)_indexOfOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (id)_complicationSlotDescriptors;
- (id)_orderedComplicationSlots;
- (id)_localizedNameForComplicationSlot:(id)a0;
- (BOOL)_hasOptionsForCustomEditMode:(long long)a0;
- (id)selectedOptionForCustomEditMode:(long long)a0 slot:(id)a1;
- (void)setResourceDirectoryByTransferringOwnership:(id)a0;
- (BOOL)_option:(id)a0 migratesToValidOption:(id *)a1 forCustomEditMode:(long long)a2;
- (long long)_customEditModeForUniqueConfiguration;
- (void)_prepareEditOptions;
- (void)_cleanupEditOptions;
- (id)faceSharingName;
- (id)complicationForSlot:(id)a0;
- (void)enumerateComplicationSlotsWithBlock:(id /* block */)a0;
- (void)setResourceDirectory:(id)a0;
- (void)enumerateVisibleComplicationSlotsForCurrentConfigurationWithBlock:(id /* block */)a0;
- (id)orderedComplicationSlots;
- (id)editOptionThatHidesAllComplications;
- (id)complicationSlotsHiddenByEditOption:(id)a0;
- (id)allVisibleComplicationsForCurrentConfiguration;
- (id)customDataForKey:(id)a0;
- (void)setCustomData:(id)a0 forKey:(id)a1;
- (id)allowedComplicationsForSlot:(id)a0;
- (long long)preferredComplicationFamilyForComplication:(id)a0 withSlot:(id)a1;
- (id)selectedSlotForEditMode:(long long)a0;
- (void)prepareEditOptions;
- (long long)dynamicEditMode;
- (id)selectedSlotOptionsForCustomEditMode:(long long)a0;
- (unsigned long long)indexOfOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (id)displayNameForComplicationSlot:(id)a0;
- (BOOL)_wantsUnadornedSnapshot;
- (BOOL)_snapshotContext:(id)a0 isStaleRelativeToContext:(id)a1;
- (BOOL)snapshotContext:(id)a0 isStaleRelativeToContext:(id)a1;
- (void)_setFaceGalleryComplicationTypesForSlots:(id)a0 canRepeat:(BOOL)a1;
- (BOOL)_faceGalleryDidUpdateFaceColorForColorEditOptionClass:(Class)a0 availableHardwareSpecificColorOptions:(id)a1 availableColorOptions:(id)a2;
- (id)_faceGalleryCalloutName;
- (BOOL)_faceGalleryIsRestricted;
- (id)_faceDescriptionForLibrary;
- (void)didMoveToLibrary;
- (void)_updateForResourceDirectoryChange:(id)a0;
- (id)editOptionsForCustomEditModes;
- (id)selectedOptionsForCustomEditModes;
- (void)incrementNumberOfCompanionEdits;
- (unsigned long long)numberOfDynamicSections;
- (id)newDynamicEditOptionCollectionForSection:(unsigned long long)a0;
- (void)_updateComplicationTombstones;
- (BOOL)shouldIncludeResourceDirectoryForSharing;
- (BOOL)createResourceDirectorySuitableForSharingAtPath:(id)a0 error:(id *)a1;
- (id)JSONObjectRepresentation;
- (void)prepareForSharing;
- (id)createSharingMetadata;
- (void)handleSharingMetadata:(id)a0;
- (BOOL)slot:(id)a0 supportsFamiliesOfComplications:(id)a1;
- (BOOL)isFullscreenConfiguration;
- (BOOL)shouldSanitizeFaceConfigurationWhenAddingSharedFace;
- (BOOL)sanitizeFaceConfiguration:(id *)a0;
- (void)_selectDefaultSlots;
- (void)toggleComplicationChangeObservation:(BOOL)a0;
- (void)_deleteResourceDirectoryIfOwned;
- (void)_handleComplicationChangeNotification;
- (void)_handleSingleComplicationDidChangeNotification:(id)a0;
- (void)_setResourceDirectory:(id)a0;
- (void)_notifyObserversFaceResourceDirectoryDidChange;
- (void)_notifyObserversThatRespondToSelector:(SEL)a0 callSelector:(id /* block */)a1;
- (BOOL)_shouldHideUI;
- (id)_sortedComplicationSlots;
- (BOOL)_complication:(id)a0 appearsInDailySnapshotForSlot:(id)a1;
- (id)_resourceDirectorySnapshotKey;
- (void)_notifyObserversFaceConfigurationDidChange;
- (void)_noteOptionChangedFrom:(id)a0 to:(id)a1 forCustomEditMode:(long long)a2 slot:(id)a3;
- (long long)_dynamicEditMode;
- (unsigned long long)_numberOfDynamicSections;
- (void)enumerateSlotsForCustomEditMode:(long long)a0 withBlock:(id /* block */)a1;
- (id)slotsForCustomEditMode:(long long)a0;
- (id)faceDescriptor;
- (id)nameOfSelectedOptionForCustomEditMode:(long long)a0;
- (id)_editOptionsForEditMode:(long long)a0;
- (unsigned long long)_collectionTypeForEditMode:(long long)a0;
- (void)cleanupEditOptions;
- (unsigned long long)numberOfOptionsForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)optionAtIndex:(unsigned long long)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (id)_allComplications;
- (void)enumerateCustomEditModesWithBlock:(id /* block */)a0;
- (id)allowedComplicationTypesFromDescriptors:(id)a0 slot:(id)a1;
- (id)allowedComplicationsForSlot:(id)a0 includingComplication:(id)a1;
- (id)allowedComplicationTypesForSlot:(id)a0;
- (id)_allowedComplicationsOfType:(unsigned long long)a0 forSlot:(id)a1;
- (id)possibleComplicationTypesForSlot:(id)a0;
- (void)_complicationsDidChange;
- (void)_notifyAppsOfSharedComplicationDescriptors;
- (id)_disabledComplicationTypesIndexSet;
- (BOOL)_hasCustomSwitcherSelectionAction;
- (void)_performCustomSwitcherSelectionAction;
- (id)_initWithFaceStyle:(long long)a0 forDevice:(id)a1;
- (void)applyDefaultConfiguration;
- (BOOL)_applyConfiguration:(id)a0 allowFailure:(BOOL)a1;
- (void)applyDefaultComplicationConfiguration;
- (id)_defaultComplicationOfType:(unsigned long long)a0 forSlot:(id)a1;
- (void)_prepareForDeletion;
- (Class)_optionClassForCustomEditMode:(long long)a0 resourceDirectoryExists:(BOOL)a1;
- (id)_configurationFromOldEncodingWithCoder:(id)a0;
- (id)_complicationMigrationPaths;
- (long long)_editModeForOldEncodingIndex:(long long)a0;
- (id)_createSharingMetadata;
- (void)_handleSharingMetadata:(id)a0;
- (BOOL)_shouldIncludeResourceDirectoryForSharing;
- (BOOL)_createResourceDirectorySuitableForSharingAtPath:(id)a0 error:(id *)a1;
- (BOOL)_shouldSanitizeFaceConfigurationWhenAddingSharedFace;
- (BOOL)_sanitizeFaceConfiguration:(id *)a0;
- (void)_customizeWithJSONDescription:(id)a0;
- (BOOL)_verifyCompatibilityOfConfiguration:(id)a0;
- (id)_defaultOptionForMissingCustomEditMode:(long long)a0 slot:(id)a1;
- (BOOL)_option:(id)a0 isValidForCustomEditMode:(long long)a1 slot:(id)a2;
- (BOOL)option:(id)a0 migratesToValidOption:(id *)a1 forCustomEditMode:(long long)a2;
- (Class)editOptionClassFromEditMode:(long long)a0 resourceDirectoryExists:(BOOL)a1;
- (void)setComplicationSlotDescriptors:(id)a0;
- (void)_notifyObserversOptionsDidChangeForEditMode:(long long)a0;
- (void)_notifyObserversFaceUpgradeOccurred;
- (id)customEditModes;
- (void)selectOptions:(id)a0 forCustomEditMode:(long long)a1;
- (id)defaultOptionForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)namesOfSelectedOptionsForCustomEditModes;
- (id)rankedComplicationFamiliesForSlot:(id)a0;
- (void)clearComplicationTombstones;
- (BOOL)hasComplicationsOfType:(unsigned long long)a0 forSlot:(id)a1;
- (BOOL)hasCustomSwitcherSelectionAction;
- (void)performCustomSwitcherSelectionAction;
- (void)setSelectedSlot:(id)a0 forEditMode:(long long)a1;
- (void)applyUniqueConfigurationWithExistingFaces:(id)a0;
- (BOOL)isEquivalentToFace:(id)a0;
- (void)incrementNumberOfGizmoEdits;
- (BOOL)hasValidConfigurationForDevice:(id)a0;
- (id)_faceDescription;
- (id)faceDescriptionForExternal;
- (id)faceDescriptionForLibrary;
- (id)_faceDescriptionKey;
- (id)_faceDescriptionKeyForLibrary;
- (id)_faceDescriptionForExternal;
- (id)_faceDescriptionKeyForExternal;

@end

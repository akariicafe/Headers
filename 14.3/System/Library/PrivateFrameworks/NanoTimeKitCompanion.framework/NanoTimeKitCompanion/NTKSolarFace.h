@interface NTKSolarFace : NTKFace

+ (id)_complicationSlotDescriptors;
+ (id)_defaultSelectedComplicationSlotForDevice:(id)a0;
+ (id)_orderedComplicationSlots;

- (id)_complicationSlotDescriptors;
- (id)_localizedNameForComplicationSlot:(id)a0;
- (id)orderedComplicationSlots;
- (BOOL)_snapshotContext:(id)a0 isStaleRelativeToContext:(id)a1;
- (id)_faceDescriptionForLibrary;

@end

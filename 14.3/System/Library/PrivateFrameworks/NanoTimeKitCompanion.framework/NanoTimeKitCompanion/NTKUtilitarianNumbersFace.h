@class NSString;

@interface NTKUtilitarianNumbersFace : NTKUtilitarianFace <NTKFaceComplicationPreviewable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_complicationSlotDescriptors;
+ (id)_defaultSelectedComplicationSlotForDevice:(id)a0;
+ (id)_orderedComplicationSlots;
+ (id)_dateComplicationSlotForDevice:(id)a0;
+ (unsigned long long)_dateComplicationSlotSupportedStylesForDevice:(id)a0;

- (void)applyPreviewConfigurationWithFamily:(long long)a0 faceColor:(long long)a1;

@end

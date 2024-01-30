@class NSString;

@interface NTKFaceComplicationConfiguration : NSObject <NTKFaceComplicationConfiguration>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultLocalizedNameForComplicationSlot:(id)a0;

- (id)richComplicationSlotsForDevice:(id)a0;
- (BOOL)complicationExistenceInvalidatesSnapshot;
- (id)complicationSlotDescriptors;
- (id)defaultSelectedComplicationSlotForDevice:(id)a0;
- (id)localizedNameForComplicationSlot:(id)a0;
- (id)orderedComplicationSlots;

@end

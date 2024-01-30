@interface NTKCornerComplicationConfiguration : NTKFaceComplicationConfiguration {
    unsigned long long _topLeftComplication;
    unsigned long long _topRightComplication;
    unsigned long long _bottomLeftComplication;
    unsigned long long _bottomRightComplication;
}

- (id)init;
- (id)richComplicationSlotsForDevice:(id)a0;
- (BOOL)complicationExistenceInvalidatesSnapshot;
- (id)complicationSlotDescriptors;
- (id)defaultSelectedComplicationSlotForDevice:(id)a0;
- (id)initWithTopLeftComplication:(unsigned long long)a0 topRightComplication:(unsigned long long)a1 bottomLeftComplication:(unsigned long long)a2 bottomRightComplication:(unsigned long long)a3;
- (id)orderedComplicationSlots;

@end

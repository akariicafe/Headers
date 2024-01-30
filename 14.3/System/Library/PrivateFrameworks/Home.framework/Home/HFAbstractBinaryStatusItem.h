@interface HFAbstractBinaryStatusItem : HFAbstractControlStatusItem

- (id)oneNormalServiceFormatString;
- (id)multipleNormalServicesFormatString;
- (id)oneAbnormalServiceFormatString;
- (id)oneAbnormalServiceWithRoomFormatString;
- (id)multipleAbnormalServicesWithRoomFormatString;
- (id)multipleAbnormalServicesFormatString;
- (id)defaultTitleForRepresentedHomeKitObjects:(id)a0;
- (id)oneUnknownServiceFormatString;
- (id)multipleUnknownServicesFormatString;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)_shortTitleForTitle:(id)a0;

@end

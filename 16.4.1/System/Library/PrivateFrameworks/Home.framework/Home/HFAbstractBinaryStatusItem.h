@interface HFAbstractBinaryStatusItem : HFAbstractControlStatusItem

- (id)_subclass_updateWithOptions:(id)a0;
- (id)_shortTitleForTitle:(id)a0;
- (id)defaultTitleForRepresentedHomeKitObjects:(id)a0;
- (id)multipleAbnormalServicesDescriptionString;
- (id)multipleAbnormalServicesFormatString;
- (id)multipleNormalServicesDescriptionString;
- (id)multipleNormalServicesFormatString;
- (id)multipleUnknownServicesFormatString;
- (id)oneAbnormalServiceDescriptionString;
- (id)oneAbnormalServiceFormatString;
- (id)oneNormalServiceDescriptionString;
- (id)oneNormalServiceFormatString;
- (id)oneUnknownServiceFormatString;

@end

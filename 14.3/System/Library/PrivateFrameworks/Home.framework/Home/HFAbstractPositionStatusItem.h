@interface HFAbstractPositionStatusItem : HFAbstractControlStatusItem

+ (id)serviceType;

- (id)serviceTypes;
- (id)_formatStringTypeComponent;
- (id)defaultTitleForRepresentedHomeKitObjects:(id)a0;
- (id)oneObstructedServiceFormatString;
- (id)multipleObstructedServicesFormatString;
- (id)oneOpenServiceFormatString;
- (id)multipleOpenServicesFormatString;
- (id)oneOpeningServiceFormatString;
- (id)multipleOpeningServicesFormatString;
- (id)oneClosingServiceFormatString;
- (id)multipleClosingServicesFormatString;
- (id)oneClosedServiceFormatString;
- (id)multipleClosedServicesFormatString;
- (id)oneUnknownServiceFormatString;
- (id)multipleUnknownServicesFormatString;
- (id)_subclass_updateWithOptions:(id)a0;

@end

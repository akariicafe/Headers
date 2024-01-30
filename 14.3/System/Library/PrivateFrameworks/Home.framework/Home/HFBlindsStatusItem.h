@interface HFBlindsStatusItem : HFAbstractPositionStatusItem

+ (id)serviceType;

- (id)_formatStringTypeComponent;
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

@end

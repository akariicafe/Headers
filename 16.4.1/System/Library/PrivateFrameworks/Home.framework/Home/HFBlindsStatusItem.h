@interface HFBlindsStatusItem : HFAbstractPositionStatusItem

+ (id)serviceTypes;

- (id)oneOpenServiceDescriptionString;
- (id)multipleClosedServicesDescriptionString;
- (id)multipleClosedServicesFormatString;
- (id)multipleClosingServicesDescriptionString;
- (id)multipleClosingServicesFormatString;
- (id)multipleObstructedServicesDescriptionString;
- (id)multipleObstructedServicesFormatString;
- (id)multipleOpenServicesDescriptionString;
- (id)multipleOpenServicesFormatString;
- (id)multipleOpeningServicesDescriptionString;
- (id)multipleOpeningServicesFormatString;
- (id)multipleServiceTitleFormatString;
- (id)multipleUnknownServicesFormatString;
- (id)oneClosedServiceDescriptionString;
- (id)oneClosedServiceFormatString;
- (id)oneClosingServiceDescriptionString;
- (id)oneClosingServiceFormatString;
- (id)oneObstructedServiceDescriptionString;
- (id)oneObstructedServiceFormatString;
- (id)oneOpenServiceFormatString;
- (id)oneOpeningServiceDescriptionString;
- (id)oneOpeningServiceFormatString;
- (id)oneServiceTitleString;
- (id)oneUnknownServiceFormatString;

@end

@interface WDSignedClinicalDataRecordDetailViewFactory : NSObject

+ (id)issuerDetailViewControllerForSignedClinicalDataGroup:(id)a0;
+ (id)multiRecordViewControllerForMedicalRecords:(id)a0 profile:(id)a1;
+ (id)QRCodeViewControllerForSignedClinicalDataGroup:(id)a0;

- (id)init;

@end

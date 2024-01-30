@interface PKPaymentTransactionPresentation : NSObject

+ (id)_relativeDateForTransaction:(id)a0;
+ (id)secondaryFundingSourceDescriptionForTransaction:(id)a0 secondarySource:(id)a1 includeBankAccountSuffix:(BOOL)a2 useGenericNameIfNoDescriptionAvailable:(BOOL)a3;
+ (id)_statusAnnotationForTransaction:(id)a0;
+ (id)_billPaymentFundingSourceForTransaction:(id)a0;
+ (id)staticPDFNameForTransaction:(id)a0;
+ (unsigned long long)iconTypeForTransaction:(id)a0 ignoreLogoURL:(BOOL)a1;
+ (id)presentationInformationForTransaction:(id)a0 transactionSource:(id)a1 secondaryTransactionSource:(id)a2 familyMember:(id)a3 account:(id)a4 deviceName:(id)a5 context:(unsigned long long)a6;

@end

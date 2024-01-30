@interface _HKAppURLSpecification : NSObject

+ (BOOL)isAtrialFibrillationEventURL:(id)a0;
+ (BOOL)isClinicalLoginRedirectURL:(id)a0;
+ (BOOL)isClinicalOnboardingURL:(id)a0;
+ (BOOL)isHealthRecordsProviderSearchURL:(id)a0;
+ (BOOL)isViewHealthRecordsURL:(id)a0;
+ (BOOL)parseClinicalLoginRedirectURL:(id)a0 resultHandler:(id /* block */)a1 errorHandler:(id /* block */)a2;
+ (BOOL)parseClinicalOnboardingURL:(id)a0 resultHandler:(id /* block */)a1 errorHandler:(id /* block */)a2;

@end

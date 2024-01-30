@interface _HKAppURLSpecification : NSObject

+ (BOOL)isClinicalOnboardingURL:(id)a0;
+ (BOOL)isClinicalLoginRedirectURL:(id)a0;
+ (BOOL)parseClinicalOnboardingURL:(id)a0 resultHandler:(id /* block */)a1 errorHandler:(id /* block */)a2;
+ (BOOL)parseClinicalLoginRedirectURL:(id)a0 resultHandler:(id /* block */)a1 errorHandler:(id /* block */)a2;
+ (BOOL)isAtrialFibrillationEventURL:(id)a0;
+ (BOOL)isViewHealthRecordsURL:(id)a0;
+ (BOOL)isHealthRecordsProviderSearchURL:(id)a0;

@end

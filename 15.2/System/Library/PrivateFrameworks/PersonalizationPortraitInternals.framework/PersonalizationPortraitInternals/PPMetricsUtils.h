@interface PPMetricsUtils : NSObject

+ (id)stringifyFeedbackDomainStatus:(unsigned char)a0;
+ (int)mapNamedEntityCategory:(unsigned long long)a0;
+ (id)filterBundleId:(id)a0;
+ (int)mapNamedEntityAlgorithmForPET2:(unsigned long long)a0;
+ (id)stringifyFeedbackType:(unsigned int)a0;
+ (int)mapTopicAlgorithmForPET2:(unsigned long long)a0;
+ (int)sourceForBundleId:(id)a0;
+ (int)mapLocationAlgorithmForPET2:(unsigned short)a0;
+ (int)mapTopicDonationErrorForPET2:(long long)a0;
+ (id)truncatedClientBundleId:(id)a0;
+ (id)loggingQueue;
+ (id)stringifyDomain:(unsigned char)a0;
+ (id)filterGroupIdAllowance:(id)a0;
+ (int)mapDomainForPET2:(unsigned char)a0;
+ (id)truncatedClientBundleIdOrCurrentBundleId:(id)a0;

@end

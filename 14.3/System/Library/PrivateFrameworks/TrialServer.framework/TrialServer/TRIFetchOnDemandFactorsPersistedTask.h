@class NSString, TRIPersistedTaskAttribution, NSMutableArray;

@interface TRIFetchOnDemandFactorsPersistedTask : TRIPBMessage

@property (copy, nonatomic) NSString *namespaceName;
@property (nonatomic) BOOL hasNamespaceName;
@property (nonatomic) int retryCount;
@property (nonatomic) BOOL hasRetryCount;
@property (copy, nonatomic) NSString *notificationKey;
@property (nonatomic) BOOL hasNotificationKey;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) BOOL hasTaskAttribution;
@property (retain, nonatomic) NSMutableArray *treatmentAssetIndexesArray;
@property (readonly, nonatomic) unsigned long long treatmentAssetIndexesArray_Count;

+ (id)descriptor;

@end

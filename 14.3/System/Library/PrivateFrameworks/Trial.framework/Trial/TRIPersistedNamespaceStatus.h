@class NSString, TRIPBTimestamp;

@interface TRIPersistedNamespaceStatus : TRIPBMessage

@property (copy, nonatomic) NSString *namespaceName;
@property (nonatomic) BOOL hasNamespaceName;
@property (nonatomic) unsigned int namespaceCompatibilityVersion;
@property (nonatomic) BOOL hasNamespaceCompatibilityVersion;
@property (retain, nonatomic) TRIPBTimestamp *latestNotificationQueryLocalTime;
@property (nonatomic) BOOL hasLatestNotificationQueryLocalTime;
@property (nonatomic) BOOL lastFetchWasSuccess;
@property (nonatomic) BOOL hasLastFetchWasSuccess;

+ (id)descriptor;

@end

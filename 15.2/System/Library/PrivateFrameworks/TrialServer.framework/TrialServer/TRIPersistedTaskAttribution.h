@class NSString, TRIPersistedNetworkBehavior;

@interface TRIPersistedTaskAttribution : TRIPBMessage

@property (copy, nonatomic) NSString *applicationBundleId;
@property (nonatomic) BOOL hasApplicationBundleId;
@property (nonatomic) int cloudKitContainer;
@property (nonatomic) BOOL hasCloudKitContainer;
@property (copy, nonatomic) NSString *teamId;
@property (nonatomic) BOOL hasTeamId;
@property (retain, nonatomic) TRIPersistedNetworkBehavior *networkBehavior;
@property (nonatomic) BOOL hasNetworkBehavior;

+ (id)descriptor;

@end

@class TRIAppContainer, NSSet, NSString, NSURL;

@interface TRINamespaceOptionalParams : NSObject <NSCopying>

@property (copy, nonatomic) NSURL *factorsURL;
@property (copy, nonatomic) TRIAppContainer *appContainer;
@property (copy, nonatomic) NSSet *upgradeNCVs;
@property (nonatomic) int cloudKitContainerId;
@property (copy, nonatomic) NSString *resourceAttributionIdentifier;
@property (nonatomic) BOOL expensiveNetworkingAllowed;
@property (nonatomic) BOOL enableFetchDuringSetupAssistant;
@property (nonatomic) int purgeabilityLevel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end

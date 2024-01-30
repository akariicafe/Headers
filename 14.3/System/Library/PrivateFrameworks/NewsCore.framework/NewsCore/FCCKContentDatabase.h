@class NSString, FCNetworkBehaviorMonitor;

@interface FCCKContentDatabase : NSObject

@property (readonly, copy, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) BOOL isProductionEnvironment;
@property (readonly, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (readonly, nonatomic) BOOL shouldUseCloudd;
@property (nonatomic) BOOL shouldUseSecureConnectionForCKAssetURLs;
@property (nonatomic) BOOL shouldBypassCDNForCKAssetURLs;
@property (nonatomic) double maximumRetryAfterForCK;

- (void)addOperation:(id)a0;
- (void)updateAssetURLHostIfNeededWithComponents:(id)a0;
- (id)permanentURLForRecordID:(id)a0 field:(long long)a1 useSecureConnection:(BOOL)a2;
- (id)init;
- (void).cxx_destruct;
- (id)initWithContextConfiguration:(id)a0 networkBehaviorMonitor:(id)a1;
- (id)permanentURLForRecordID:(id)a0 field:(long long)a1;
- (id)initWithContainerIdentifier:(id)a0 productionEnvironment:(BOOL)a1 networkBehaviorMonitor:(id)a2;

@end

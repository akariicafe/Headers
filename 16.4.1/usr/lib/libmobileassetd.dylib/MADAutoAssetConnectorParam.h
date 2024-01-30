@class NSString, NSArray, MAAutoAssetSelector, NSURL;

@interface MADAutoAssetConnectorParam : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *paramSafeSummary;
@property (readonly, nonatomic) long long paramType;
@property (retain, nonatomic) NSArray *monitorSelectors;
@property (retain, nonatomic) NSArray *selectorsNoRetry;
@property (retain, nonatomic) NSArray *selectorsRequiringRetry;
@property (retain, nonatomic) MAAutoAssetSelector *finishedAssetSelector;
@property (nonatomic) BOOL potentialNetworkFailure;
@property (retain, nonatomic) NSURL *observedNetworkPath;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)description;
- (id)initWithSafeSummary:(id)a0;
- (void).cxx_destruct;
- (void)updateSafeSummary;
- (id)_newSummary;
- (id)initWithMonitorSelectors:(id)a0 withSelectorsNoRetry:(id)a1 withSelectorsRequiringRetry:(id)a2;
- (id)initWithObservedNetworkPath:(id)a0;
- (id)initWithParamType:(long long)a0 withSafeSummary:(id)a1 withMonitorSelectors:(id)a2 withSelectorsNoRetry:(id)a3 withSelectorsRequiringRetry:(id)a4 withFinishedAssetSelector:(id)a5 withPotentialNetworkFailure:(BOOL)a6 withObservedNetworkPath:(id)a7;
- (id)initWithScheduledSelectorFinished:(id)a0 withPotentialNetworkFailure:(BOOL)a1;

@end

@class NSSet, NWPathEvaluator, WFInterface, WFNetworkScanRecord, WFNetworkProfile;
@protocol WFHealthManagerDelegate;

@interface WFHealthManager : NSObject

@property (retain, nonatomic) WFInterface *interface;
@property (retain, nonatomic) NSSet *currentNetworkIssues;
@property (retain, nonatomic) NWPathEvaluator *evaluator;
@property (retain, nonatomic) WFNetworkScanRecord *network;
@property (retain, nonatomic) WFNetworkProfile *profile;
@property (readonly, nonatomic) BOOL currentNetworkHasNoInternetConnection;
@property (weak, nonatomic) id<WFHealthManagerDelegate> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithInterface:(id)a0;
- (void)currentNetworkDidChange:(id)a0;
- (void)linkQualityDidChange:(id)a0;
- (void)_updateCurrentNetworkIssues;

@end

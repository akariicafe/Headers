@class NSDictionary;

@interface _ICQUpgradeFlowSpecification : _ICQFlowSpecification {
    NSDictionary *_serverDict;
}

@property (nonatomic) long long offerType;
@property (nonatomic) BOOL needsWiFi;
@property (readonly, nonatomic) NSDictionary *serverDict;

+ (id)sanitizedUpgradeFlowServerDict:(id)a0;
+ (id)upgradeFlowSpecificationSampleForLevel:(long long)a0;
+ (id)_upgradePageIdentifierForError:(id)a0;

- (id)upgradeSuccessPage;
- (id)initWithServerDictionary:(id)a0;
- (id)upgradeFailurePageForNetwork;
- (id)upgradePageForError:(id)a0;
- (void).cxx_destruct;
- (id)upgradeFailurePage;
- (id)upgradeSuccessPageForWiFi;
- (id)upgradePageForSuccess:(BOOL)a0;

@end

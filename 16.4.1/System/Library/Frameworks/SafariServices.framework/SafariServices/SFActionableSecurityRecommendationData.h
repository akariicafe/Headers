@class WBSPasswordWarning, SFAccountCellData, NSArray, NSExtension;
@protocol SFActionableSecurityRecommendationDataDelegate;

@interface SFActionableSecurityRecommendationData : NSObject

@property (readonly, nonatomic) SFAccountCellData *accountCellData;
@property (readonly, nonatomic) WBSPasswordWarning *warning;
@property (readonly, nonatomic) unsigned long long eligibleAccountModificationActions;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSExtension *extension;
@property (readonly, nonatomic) BOOL isUpgradeToSignInWithAppleAvailable;
@property (weak, nonatomic) id<SFActionableSecurityRecommendationDataDelegate> delegate;
@property (nonatomic) BOOL didUpgradeToSignInWithApple;
@property (nonatomic) BOOL didUpgradeToStrongPassword;

- (void).cxx_destruct;
- (void)_fetchEligibleAccountModificationActionsForSavedAccount:(id)a0;
- (id)cellForTableView:(id)a0 forCellType:(id)a1;
- (id)initWithAccountCellData:(id)a0 warning:(id)a1 delegate:(id)a2;

@end

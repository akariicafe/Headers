@class WBSPasswordWarning, NSArray, SFPasswordCellData, NSExtension;
@protocol SFHighPriorityRecommendationDataDelegate;

@interface SFHighPriorityRecommendationData : NSObject

@property (readonly, nonatomic) SFPasswordCellData *passwordCellData;
@property (readonly, nonatomic) WBSPasswordWarning *warning;
@property (readonly, nonatomic) unsigned long long eligibleAccountModificationActions;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSExtension *extension;
@property (readonly, nonatomic) BOOL isUpgradeToSignInWithAppleAvailable;
@property (weak, nonatomic) id<SFHighPriorityRecommendationDataDelegate> delegate;
@property (nonatomic) BOOL didUpgradeToSignInWithApple;
@property (nonatomic) BOOL didUpgradeToStrongPassword;

- (void).cxx_destruct;
- (id)initWithPasswordCellData:(id)a0 warning:(id)a1 delegate:(id)a2;
- (id)cellForTableView:(id)a0 forCellType:(id)a1;
- (void)_fetchEligibleAccountModificationActionsForSavedPassword:(id)a0;

@end

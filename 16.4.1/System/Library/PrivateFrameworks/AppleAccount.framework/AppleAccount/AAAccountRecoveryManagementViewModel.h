@class NSString, NSURL;

@interface AAAccountRecoveryManagementViewModel : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *details;
@property (readonly, copy, nonatomic) NSString *detailsForIneligibleAccount;
@property (readonly, copy, nonatomic) NSString *learnMore;
@property (readonly, copy, nonatomic) NSURL *learnMoreURL;
@property (readonly, copy, nonatomic) NSString *appleDataRecoveryLabel;
@property (readonly, copy, nonatomic) NSString *myRecoveryContactsGroupTitle;
@property (readonly, copy, nonatomic) NSString *myRecoveryContactsAdd;
@property (readonly, copy, nonatomic) NSString *myRecoveryContactsFooter;
@property (readonly, copy, nonatomic) NSString *myRecoveryContactsFooterForIneligibleAccount;
@property (readonly, copy, nonatomic) NSURL *footerLearnMoreURL;
@property (readonly, copy, nonatomic) NSString *recoveryContactForGroupTitle;
@property (readonly, copy, nonatomic) NSString *recoveryKeyLabel;
@property (readonly, copy, nonatomic) NSString *recoveryKeyDetails;
@property (readonly, copy, nonatomic) NSURL *recoveryKeyLearnMoreURL;

- (id)recoveryKeyStatusText:(BOOL)a0;

@end

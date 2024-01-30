@class PKAccount, NSString, PKPaymentProvisioningController, PKFeatureApplication;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKApplyControllerConfiguration : NSObject

@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate;
@property (nonatomic) long long context;
@property (retain, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (nonatomic) unsigned long long feature;
@property (nonatomic) unsigned long long featureProduct;
@property (nonatomic) long long applicationType;
@property (nonatomic) long long updateUserInfoSubType;
@property (retain, nonatomic) PKFeatureApplication *featureApplication;
@property (retain, nonatomic) NSString *referenceIdentifier;
@property (retain, nonatomic) PKAccount *account;

- (void).cxx_destruct;
- (id)initWithSetupDelegate:(id)a0 context:(long long)a1 provisioningController:(id)a2;

@end

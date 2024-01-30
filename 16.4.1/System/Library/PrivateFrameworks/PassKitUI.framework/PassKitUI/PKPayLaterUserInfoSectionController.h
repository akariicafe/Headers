@class PKPayLaterAccountUserInfo, PKPaymentWebService, PKPayLaterSubtitleRow;
@protocol PKPayLaterUserInfoSectionControllerDelegate;

@interface PKPayLaterUserInfoSectionController : PKPayLaterSectionController {
    id<PKPayLaterUserInfoSectionControllerDelegate> _delegate;
    PKPayLaterAccountUserInfo *_userInfo;
    PKPaymentWebService *_paymentWebService;
    PKPayLaterSubtitleRow *_phoneRow;
    PKPayLaterSubtitleRow *_addressRow;
    PKPayLaterSubtitleRow *_incomeRow;
    BOOL _processingRowTap;
}

- (id)identifiers;
- (void).cxx_destruct;
- (void)_configureOtherUserInfoSection:(id)a0;
- (id)_dobRow;
- (void)_updateUserInfo;
- (id)_phoneNumberRow;
- (id)_ssnRow;
- (id)_addressRow;
- (void)_configureEmailAddressSection:(id)a0;
- (id)_legalNameRow;
- (id)_subtitleRowWithTitle:(id)a0 subtitle:(id)a1 selectionHandler:(id /* block */)a2;
- (id)_yearlyIncomeRow;
- (id)footerContentForSectionIdentifier:(id)a0;
- (id)initWithPayLaterAccount:(id)a0 delegate:(id)a1;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (void)setPayLaterAccount:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end

@class HKOrganDonationRegistrant, HKOrganDonationConnectionManager;

@interface HKOrganDonationConfirmUpdateViewController : HKOrganDonationBaseViewController {
    HKOrganDonationConnectionManager *_connectionManager;
    HKOrganDonationRegistrant *_registrant;
}

- (void).cxx_destruct;
- (void)updateButtonTapped:(id)a0;
- (id)bodyString;
- (id)bottomAnchoredButtons;
- (void)buttonAtIndexTapped:(long long)a0;
- (id)titleImage;
- (id)titleString;
- (id)initWithRegistrant:(id)a0 medicalIDData:(id)a1 connectionManager:(id)a2;

@end

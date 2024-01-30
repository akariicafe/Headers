@interface CloudSharingUI.AddressingViewFactory : NSObject {
    void /* unknown type, empty encoding */ viewModel;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ viewController;

- (id)init;
- (void).cxx_destruct;
- (void)addAddressFrom:(id)a0 contactProperty:(id)a1;
- (id)initWithHeaderImageData:(id)a0 headerTitle:(id)a1 loadingText:(id)a2 supplementaryText:(id)a3 userInfoText:(id)a4 primaryButtonText:(id)a5 secondaryButtonText:(id)a6 userDidClickPrimaryButton:(id /* block */)a7 userDidClickSecondaryButton:(id /* block */)a8 userDidClickShowContactPicker:(id /* block */)a9 userDidChangeAddresses:(id /* block */)a10;
- (void)updateWithHeaderImageData:(id)a0 headerTitle:(id)a1 loadingText:(id)a2 supplementaryText:(id)a3 userInfoText:(id)a4 primaryButtonText:(id)a5 secondaryButtonText:(id)a6;

@end

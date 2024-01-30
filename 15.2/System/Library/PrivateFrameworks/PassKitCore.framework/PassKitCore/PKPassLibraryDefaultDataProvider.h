@class NSString, PKPassLibrary;

@interface PKPassLibraryDefaultDataProvider : NSObject <PKPassLibraryDataProvider> {
    PKPassLibrary *_library;
}

@property (readonly, nonatomic) BOOL canAddPaymentPass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removePass:(id)a0;
- (void).cxx_destruct;
- (id)peerPaymentPassUniqueID;
- (id)init;
- (id)initWithPassLibrary:(id)a0;
- (id)passWithUniqueID:(id)a0;
- (BOOL)canAddSecureElementPassWithConfiguration:(id)a0;
- (id)paymentPasses;
- (id)passWithPassTypeIdentifier:(id)a0 serialNumber:(id)a1;

@end

@class NSString, CommerceRemoteUIDelegate;
@protocol PSCloudStorageOffersManagerDelegate;

@interface PSCloudStorageOffersManager : NSObject <CommerceRemoteUIDelegateDelegate> {
    CommerceRemoteUIDelegate *_commerceDelegate;
}

@property (weak, nonatomic) id<PSCloudStorageOffersManagerDelegate> delegate;
@property (nonatomic) unsigned long long requiredStorageThreshold;
@property (nonatomic) BOOL shouldOfferFamilySharePlansOnly;
@property (nonatomic) BOOL shouldOfferDeviceOffers;
@property (nonatomic) BOOL skipRetryWithoutToken;
@property (nonatomic) BOOL skipCompletionAlert;
@property (nonatomic) BOOL supportsModernAlerts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)cancelLoad;
- (void).cxx_destruct;
- (void)_setupFlowWithNavigationController:(id)a0 modally:(BOOL)a1;
- (void)beginFlowWithNavigationController:(id)a0 modally:(BOOL)a1;
- (void)beginFlowWithNavigationController:(id)a0 purchaseToken:(id)a1 buyParameters:(id)a2 requestHeaders:(id)a3 modally:(BOOL)a4;
- (void)commerceDelegate:(id)a0 didCompleteWithError:(id)a1;
- (void)commerceDelegate:(id)a0 loadDidFailWithError:(id)a1;
- (void)commerceDelegate:(id)a0 willPresentObjectModel:(id)a1 page:(id)a2;
- (void)commerceDelegateDidCancel:(id)a0;

@end

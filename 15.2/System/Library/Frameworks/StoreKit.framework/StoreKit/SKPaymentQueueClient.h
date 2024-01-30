@class NSString, NSNumber;
@protocol SKPaymentQueueClientDelegate;

@interface SKPaymentQueueClient : NSObject <NSCopying>

@property (nonatomic) BOOL allowsBootstrapCellularData;
@property (copy, nonatomic) NSString *productsRequestBundleIdentifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *bundleVersion;
@property (weak, nonatomic) id<SKPaymentQueueClientDelegate> delegate;
@property (nonatomic) long long environmentType;
@property (nonatomic) BOOL hidesConfirmationDialogs;
@property (nonatomic) BOOL ignoresInAppPurchaseRestriction;
@property (copy, nonatomic) NSString *receiptDirectoryPath;
@property (nonatomic) BOOL requiresAuthenticationForPayment;
@property (copy, nonatomic) NSNumber *storeExternalVersion;
@property (copy, nonatomic) NSNumber *storeItemIdentifier;
@property (copy, nonatomic) NSString *vendorIdentifier;

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)plist;

@end

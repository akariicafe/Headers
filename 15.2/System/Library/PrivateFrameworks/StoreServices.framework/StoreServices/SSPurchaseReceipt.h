@class ISPurchaseReceipt, NSDate;

@interface SSPurchaseReceipt : NSObject {
    ISPurchaseReceipt *_purchaseReceipt;
}

@property (readonly) BOOL isValid;
@property (readonly) BOOL isVPPLicensed;
@property (readonly) BOOL isRevoked;
@property (readonly) NSDate *expirationDate;

+ (id)receiptPathForProxy:(id)a0;
+ (void)getReceiptPathWithCompletionBlock:(id /* block */)a0;
+ (int)vppStateFlagsWithProxy:(id)a0;

- (id)initWithContentsOfFile:(id)a0;
- (void).cxx_destruct;
- (BOOL)receiptExpired;
- (id)initWithContainerPath:(id)a0;

@end

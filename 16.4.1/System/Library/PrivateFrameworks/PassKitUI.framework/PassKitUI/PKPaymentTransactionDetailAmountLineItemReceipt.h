@class UIImage, NSString, PKTransactionReceiptLineItem;

@interface PKPaymentTransactionDetailAmountLineItemReceipt : NSObject <PKPaymentTransactionDetailAmountLineItem> {
    PKTransactionReceiptLineItem *_lineItem;
}

@property (nonatomic) BOOL hasTrailingLineSeperator;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSString *secondaryLabel;
@property (readonly, nonatomic) NSString *tertiaryLabel;
@property (readonly, nonatomic) unsigned long long lineItemType;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) BOOL isEmphasized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithReceiptLineItem:(id)a0;

@end

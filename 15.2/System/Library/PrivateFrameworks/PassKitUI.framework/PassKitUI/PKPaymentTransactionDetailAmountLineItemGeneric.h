@class NSString;

@interface PKPaymentTransactionDetailAmountLineItemGeneric : NSObject <PKPaymentTransactionDetailAmountLineItem> {
    NSString *_label;
    NSString *_value;
}

@property (nonatomic) BOOL hasTrailingLineSeperator;
@property (nonatomic) BOOL isEmphasized;
@property (readonly, nonatomic) unsigned long long lineItemType;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 value:(id)a1;

@end

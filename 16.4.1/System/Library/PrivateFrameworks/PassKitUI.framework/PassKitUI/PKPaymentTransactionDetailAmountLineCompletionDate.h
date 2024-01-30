@class NSString, NSDate;

@interface PKPaymentTransactionDetailAmountLineCompletionDate : NSObject <PKPaymentTransactionDetailAmountLineItem>

@property (nonatomic) BOOL hasTrailingLineSeperator;
@property (readonly, nonatomic) BOOL completed;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) unsigned long long lineItemType;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) BOOL isEmphasized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)secondaryLabel;
- (id)tertiaryLabel;
- (id)image;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0 completed:(BOOL)a1;

@end

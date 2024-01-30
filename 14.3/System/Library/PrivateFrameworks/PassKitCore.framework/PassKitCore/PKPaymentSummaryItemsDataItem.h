@class NSString, NSArray;

@interface PKPaymentSummaryItemsDataItem : PKPaymentDataItem

@property (readonly, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) NSArray *paymentSummaryItems;

+ (long long)dataType;

- (BOOL)isValidWithError:(id *)a0;

@end

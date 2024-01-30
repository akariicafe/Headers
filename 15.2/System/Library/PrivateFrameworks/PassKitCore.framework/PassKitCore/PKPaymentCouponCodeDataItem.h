@class NSString, NSArray;

@interface PKPaymentCouponCodeDataItem : PKPaymentDataItem

@property (readonly, copy, nonatomic) NSString *couponCode;
@property (readonly, nonatomic, getter=isAwaitingCouponCodeUpdate) BOOL awaitingCouponCodeUpdate;
@property (readonly, copy, nonatomic) NSArray *errors;

+ (long long)dataType;

- (BOOL)isValidWithError:(id *)a0;

@end

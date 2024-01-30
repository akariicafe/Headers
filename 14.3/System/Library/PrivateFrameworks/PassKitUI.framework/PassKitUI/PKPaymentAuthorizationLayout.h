@class NSString;

@interface PKPaymentAuthorizationLayout : NSObject

@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) double contentHorizontalMargin;
@property (readonly, nonatomic) double valueLeftMargin;
@property (readonly, nonatomic) double glyphDimension;
@property (readonly, nonatomic) unsigned long long requestType;
@property (readonly, nonatomic) unsigned long long requestor;
@property (readonly, nonatomic) BOOL isAMPPayment;
@property (readonly, nonatomic) BOOL isInstallment;
@property (readonly, nonatomic) BOOL isPaymentSummaryPinned;
@property (readonly, nonatomic) NSString *localizedNavigationTitle;
@property (readonly, nonatomic) BOOL shouldSuppressTotal;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 paymentRequest:(id)a1;

@end

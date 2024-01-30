@class NSString;

@interface PKPaymentTransactionPresentationInformation : NSObject

@property (retain, nonatomic) NSString *primaryString;
@property (retain, nonatomic) NSString *secondaryString;
@property (retain, nonatomic) NSString *tertiaryString;
@property (nonatomic) BOOL destructiveSecondaryString;
@property (retain, nonatomic) NSString *rewardsString;
@property (retain, nonatomic) NSString *valueString;
@property (nonatomic) BOOL shouldGrayValue;
@property (nonatomic) BOOL shouldStrikeValue;
@property (nonatomic) BOOL shouldShowDisclosure;

- (void).cxx_destruct;

@end

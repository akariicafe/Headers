@class NSString, NSDate;

@interface UIAXPKSpendingElement : UIAccessibilityElement

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) double chartValue;
@property (retain, nonatomic) NSString *currency;

- (void).cxx_destruct;

@end

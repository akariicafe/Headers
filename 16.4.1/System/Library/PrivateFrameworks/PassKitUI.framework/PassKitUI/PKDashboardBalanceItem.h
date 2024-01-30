@class NSString, UIColor;

@interface PKDashboardBalanceItem : NSObject <PKDashboardItem>

@property (retain, nonatomic) NSString *balance;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) NSString *availableCredit;
@property (retain, nonatomic) NSString *topUpTitle;
@property (copy, nonatomic) id /* block */ topUpAction;
@property (nonatomic) BOOL topUpEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void).cxx_destruct;

@end

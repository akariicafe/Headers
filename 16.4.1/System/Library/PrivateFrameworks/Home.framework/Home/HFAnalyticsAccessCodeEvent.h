@class NSString, HFPinCodeItem, NSNumber, HMHome;

@interface HFAnalyticsAccessCodeEvent : HFAnalyticsEvent

@property (retain, nonatomic) HMHome *home;
@property (nonatomic) unsigned long long operationType;
@property (retain, nonatomic) HFPinCodeItem *pinCodeItem;
@property (retain, nonatomic) NSNumber *duringOnboarding;
@property (retain, nonatomic) NSNumber *errorCode;
@property (retain, nonatomic) NSString *errorDomain;
@property (retain, nonatomic) NSNumber *totalGuestPINCodes;
@property (retain, nonatomic) NSNumber *ratioOfUserPINCodes;

- (id)initWithData:(id)a0;
- (id)payload;
- (void).cxx_destruct;

@end

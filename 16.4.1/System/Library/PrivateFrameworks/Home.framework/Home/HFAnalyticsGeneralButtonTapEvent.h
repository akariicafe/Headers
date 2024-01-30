@class NSString;

@interface HFAnalyticsGeneralButtonTapEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *buttonTitle;
@property (retain, nonatomic) NSString *processName;
@property (retain, nonatomic) NSString *sourceViewControllerClassName;

- (id)initWithData:(id)a0;
- (id)payload;
- (void).cxx_destruct;

@end

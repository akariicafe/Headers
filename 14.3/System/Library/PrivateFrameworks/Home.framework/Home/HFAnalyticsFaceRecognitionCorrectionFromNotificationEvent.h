@class NSString, NSNumber;

@interface HFAnalyticsFaceRecognitionCorrectionFromNotificationEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *errorDomain;
@property (retain, nonatomic) NSNumber *errorCode;

- (id)payload;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end

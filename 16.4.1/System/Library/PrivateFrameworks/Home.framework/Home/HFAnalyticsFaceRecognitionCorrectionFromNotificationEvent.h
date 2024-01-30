@class NSString, NSNumber;

@interface HFAnalyticsFaceRecognitionCorrectionFromNotificationEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *errorDomain;
@property (retain, nonatomic) NSNumber *errorCode;

- (id)initWithData:(id)a0;
- (id)payload;
- (void).cxx_destruct;

@end

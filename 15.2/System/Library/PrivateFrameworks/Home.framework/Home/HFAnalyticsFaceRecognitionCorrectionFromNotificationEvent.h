@class NSString, NSNumber;

@interface HFAnalyticsFaceRecognitionCorrectionFromNotificationEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *errorDomain;
@property (retain, nonatomic) NSNumber *errorCode;

- (id)payload;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end

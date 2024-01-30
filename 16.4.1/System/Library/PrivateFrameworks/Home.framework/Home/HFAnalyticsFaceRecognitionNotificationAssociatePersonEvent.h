@class NSNumber;

@interface HFAnalyticsFaceRecognitionNotificationAssociatePersonEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *unknownPersonsTagCount;
@property (retain, nonatomic) NSNumber *openURLSuccess;

- (id)initWithData:(id)a0;
- (id)payload;
- (void).cxx_destruct;

@end

@class NSNumber;

@interface HFAnalyticsFaceRecognitionNotificationAssociatePersonEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *unknownPersonsTagCount;
@property (retain, nonatomic) NSNumber *openURLSuccess;

- (id)payload;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end

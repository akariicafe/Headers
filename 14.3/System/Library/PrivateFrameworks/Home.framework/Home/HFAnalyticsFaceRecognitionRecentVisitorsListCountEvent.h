@class NSNumber;

@interface HFAnalyticsFaceRecognitionRecentVisitorsListCountEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *faceCropCount;
@property (retain, nonatomic) NSNumber *clusteredNoNamePersonCount;
@property (retain, nonatomic) NSNumber *unknownFaceCropCount;
@property (retain, nonatomic) NSNumber *unknownPersonCountTotal;

- (id)payload;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end

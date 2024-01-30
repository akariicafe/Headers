@class NSUUID, NSString, NSDate;

@interface HFAnalyticsCameraDidFailToLoadPosterFrameEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSUUID *clipID;
@property (retain, nonatomic) NSUUID *cameraID;
@property (nonatomic) double posterFrameTimeOffset;
@property (retain, nonatomic) NSDate *clipStartDate;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) long long errorCode;

- (id)payload;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end

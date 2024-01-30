@class NSString;

@interface HFAnalyticsRecommendationsEnabledEvent : HFAnalyticsEvent

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL success;
@property (nonatomic) double rank;
@property (nonatomic) int rankInt;
@property (retain, nonatomic) NSString *serviceType;
@property (retain, nonatomic) NSString *accessoryCategory;
@property (retain, nonatomic) NSString *source;
@property (retain, nonatomic) NSString *presentationContext;

- (id)payload;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end

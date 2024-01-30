@interface SXArticleScrollEvent : SXAnalyticsEvent

@property (nonatomic) double startPosition;
@property (nonatomic) double endPosition;
@property (nonatomic) double targetPosition;
@property (nonatomic) double velocity;

@end

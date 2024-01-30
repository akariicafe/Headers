@class NSNumber;

@interface TPSAnalyticsEventAppLeavesScreen : TPSAnalyticsEvent {
    NSNumber *_previouslyUnseenTipViews;
    NSNumber *_collectionViews;
    NSNumber *_tipViewsThisSession;
}

@property (readonly, nonatomic) NSNumber *previouslyUnseenTipViewsInThisSession;
@property (readonly, nonatomic) NSNumber *collectionViews;
@property (readonly, nonatomic) NSNumber *tipViewsInThisSession;

+ (BOOL)supportsSecureCoding;

- (id)eventName;
- (void).cxx_destruct;
- (id)mutableAnalyticsEventRepresentation;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

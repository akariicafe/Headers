@class NSString;

@interface TPSAnalyticsEventDesiredOutcomePerformed : TPSAnalyticsEvent

@property (nonatomic) double timeToDesiredOutcome;
@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *context;
@property (retain, nonatomic) NSString *experimentID;
@property (retain, nonatomic) NSString *experimentCampID;
@property (retain, nonatomic) NSString *displayType;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithContentID:(id)a0 displayType:(id)a1 lastDisplayedContext:(id)a2 lastHintDisplayedDate:(id)a3 desiredOutcomePerformedDate:(id)a4;

- (void)setDataProvider:(id)a0;
- (id)eventName;
- (void).cxx_destruct;
- (id)mutableAnalyticsEventRepresentation;
- (id)initWithCoder:(id)a0;
- (id)_initWithContentID:(id)a0 context:(id)a1 displayType:(id)a2 lastHintDisplayedDate:(id)a3 desiredOutcomePerformedDate:(id)a4;
- (void)encodeWithCoder:(id)a0;

@end

@class NSNumber, NSString;

@interface TPSAnalyticsEventContentViewed : TPSAnalyticsEvent

@property (retain, nonatomic) NSNumber *trialDeploymentID;
@property (retain, nonatomic) NSString *trialExperimentID;
@property (retain, nonatomic) NSString *trialTreatmentID;
@property (retain, nonatomic) NSString *trialRampID;
@property (nonatomic) double timeOnScreen;
@property (nonatomic) BOOL seenThisContentBefore;
@property (nonatomic) BOOL hardwareWelcome;
@property (nonatomic) BOOL softwareWelcome;
@property (nonatomic) BOOL isNotificationModelControl;
@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *collectionID;
@property (retain, nonatomic) NSString *correlationID;
@property (retain, nonatomic) NSString *clientConditionID;
@property (readonly, nonatomic) NSNumber *sessionViewNumber;
@property (retain, nonatomic) NSString *viewMethod;
@property (retain, nonatomic) NSString *viewMode;
@property (retain, nonatomic) NSString *contentStyle;
@property (retain, nonatomic) NSString *widgetType;

+ (BOOL)supportsSecureCoding;
+ (void)setAppReferrer:(id)a0;
+ (id)eventWithContentID:(id)a0 collectionID:(id)a1 correlationID:(id)a2 clientConditionID:(id)a3 viewMethod:(id)a4 contentStyle:(id)a5 viewMode:(id)a6 timeOnScreen:(double)a7 seenThisContentBefore:(BOOL)a8 hardwareWelcome:(BOOL)a9 softwareWelcome:(BOOL)a10;
+ (id)eventWithContentID:(id)a0 collectionID:(id)a1 correlationID:(id)a2 clientConditionID:(id)a3 widgetType:(id)a4 hardwareWelcome:(BOOL)a5 softwareWelcome:(BOOL)a6;
+ (void)incrementSessionViewNumberForKey:(id)a0;
+ (void)resetSessionViewNumber;
+ (BOOL)updateSessionViewNumber;

- (void)encodeWithCoder:(id)a0;
- (id)eventName;
- (id)initWithCoder:(id)a0;
- (void)log;
- (id)mutableAnalyticsEventRepresentation;
- (void)setDataProvider:(id)a0;
- (void).cxx_destruct;
- (id)_initWithContentID:(id)a0 collectionID:(id)a1 correlationID:(id)a2 clientConditionID:(id)a3 viewMethod:(id)a4 contentStyle:(id)a5 viewMode:(id)a6 timeOnScreen:(double)a7 seenThisContentBefore:(BOOL)a8 hardwareWelcome:(BOOL)a9 softwareWelcome:(BOOL)a10;
- (id)_initWithContentID:(id)a0 collectionID:(id)a1 correlationID:(id)a2 clientConditionID:(id)a3 widgetType:(id)a4 hardwareWelcome:(BOOL)a5 softwareWelcome:(BOOL)a6;
- (BOOL)isWidget;

@end

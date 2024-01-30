@class NSString, NSNumber;

@interface TPSAnalyticsEventContentViewed : TPSAnalyticsEvent

@property (nonatomic) double timeOnScreen;
@property (nonatomic) double animationLoadTime;
@property (nonatomic) BOOL animationFinished;
@property (nonatomic) BOOL seenThisContentBefore;
@property (nonatomic) BOOL hardwareWelcome;
@property (nonatomic) BOOL softwareWelcome;
@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *collectionID;
@property (retain, nonatomic) NSString *correlationID;
@property (readonly, nonatomic) NSNumber *sessionViewNumber;
@property (retain, nonatomic) NSString *viewMethod;
@property (retain, nonatomic) NSString *viewMode;
@property (retain, nonatomic) NSString *contentStyle;
@property (retain, nonatomic) NSString *widgetType;

+ (BOOL)supportsSecureCoding;
+ (void)resetSessionViewNumber;
+ (BOOL)updateSessionViewNumber;
+ (id)eventWithContentID:(id)a0 collectionID:(id)a1 correlationID:(id)a2 widgetType:(id)a3 hardwareWelcome:(BOOL)a4 softwareWelcome:(BOOL)a5;
+ (id)eventWithContentID:(id)a0 collectionID:(id)a1 correlationID:(id)a2 viewMethod:(id)a3 contentStyle:(id)a4 viewMode:(id)a5 timeOnScreen:(double)a6 animationLoadTime:(double)a7 animationFinished:(BOOL)a8 seenThisContentBefore:(BOOL)a9 hardwareWelcome:(BOOL)a10 softwareWelcome:(BOOL)a11;
+ (void)incrementSessionViewNumberForKey:(id)a0;
+ (void)setAppReferrer:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void)log;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)eventName;
- (BOOL)isWidget;
- (id)mutableAnalyticsEventRepresentation;
- (id)_initWithContentID:(id)a0 collectionID:(id)a1 correlationID:(id)a2 widgetType:(id)a3 hardwareWelcome:(BOOL)a4 softwareWelcome:(BOOL)a5;
- (id)_initWithContentID:(id)a0 collectionID:(id)a1 correlationID:(id)a2 viewMethod:(id)a3 contentStyle:(id)a4 viewMode:(id)a5 timeOnScreen:(double)a6 animationLoadTime:(double)a7 animationFinished:(BOOL)a8 seenThisContentBefore:(BOOL)a9 hardwareWelcome:(BOOL)a10 softwareWelcome:(BOOL)a11;

@end

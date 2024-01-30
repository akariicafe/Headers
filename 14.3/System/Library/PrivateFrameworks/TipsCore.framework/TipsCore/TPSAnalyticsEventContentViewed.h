@class NSString, NSNumber;

@interface TPSAnalyticsEventContentViewed : TPSAnalyticsEvent

@property (nonatomic) double timeOnScreen;
@property (nonatomic) double animationLoadTime;
@property (nonatomic) BOOL animationFinished;
@property (nonatomic) BOOL seenThisContentBefore;
@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *collectionID;
@property (readonly, nonatomic) NSNumber *sessionViewNumber;
@property (retain, nonatomic) NSString *viewMethod;
@property (retain, nonatomic) NSString *viewMode;
@property (retain, nonatomic) NSString *contentStyle;
@property (retain, nonatomic) NSString *widgetType;

+ (void)incrementSessionViewNumberForKey:(id)a0;
+ (BOOL)supportsSecureCoding;
+ (id)eventWithContentID:(id)a0 collectionID:(id)a1 widgetType:(id)a2;
+ (id)eventWithContentID:(id)a0 collectionID:(id)a1 viewMethod:(id)a2 contentStyle:(id)a3 viewMode:(id)a4 timeOnScreen:(double)a5 animationLoadTime:(double)a6 animationFinished:(BOOL)a7 seenThisContentBefore:(BOOL)a8;
+ (void)resetSessionViewNumber;
+ (BOOL)updateSessionViewNumber;

- (id)eventName;
- (void).cxx_destruct;
- (id)_initWithContentID:(id)a0 collectionID:(id)a1 widgetType:(id)a2;
- (id)_initWithContentID:(id)a0 collectionID:(id)a1 viewMethod:(id)a2 contentStyle:(id)a3 viewMode:(id)a4 timeOnScreen:(double)a5 animationLoadTime:(double)a6 animationFinished:(BOOL)a7 seenThisContentBefore:(BOOL)a8;
- (void)log;
- (id)mutableAnalyticsEventRepresentation;
- (id)initWithCoder:(id)a0;
- (BOOL)isWidget;
- (void)encodeWithCoder:(id)a0;

@end

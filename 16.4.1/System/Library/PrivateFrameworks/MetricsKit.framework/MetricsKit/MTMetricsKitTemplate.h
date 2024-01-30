@class MTUtils, NSString, MTEventHandlers, MTSystem, MTConfig;
@protocol MTDelegatePackage;

@interface MTMetricsKitTemplate : NSObject

@property (retain, nonatomic) NSString *topic;
@property (retain, nonatomic) MTConfig *config;
@property (retain, nonatomic) MTEventHandlers *eventHandlers;
@property (retain, nonatomic) MTSystem *system;
@property (retain, nonatomic) MTUtils *utils;
@property (retain, nonatomic) id<MTDelegatePackage> delegatePackage;

+ (id)kitWithTopic:(id)a0 amsBag:(id)a1;
+ (id)kitWithTopic:(id)a0 bagProfile:(id)a1 profileVersion:(id)a2;

- (void).cxx_destruct;
- (id)initWithTopic:(id)a0;
- (id)initWithTopic:(id)a0 delegatePackage:(id)a1;
- (id)initWithTopic:(id)a0 bagProfile:(id)a1 profileVersion:(id)a2;
- (id)metricsDataWithEventHandlerName:(id)a0 eventData:(id)a1;
- (id)metricsDataWithEventHandlerName:(id)a0 fields:(id)a1;
- (id)metricsDataWithEventHandlerName:(id)a0 pageData:(id)a1 eventData:(id)a2;
- (id)metricsDataWithEventHandlerName:(id)a0 pageData:(id)a1 fields:(id)a2;
- (id)metricsDataWithEventHandlerName:(id)a0 pageId:(id)a1 pageType:(id)a2 pageContext:(id)a3 eventData:(id)a4;
- (id)metricsDataWithEventHandlerName:(id)a0 pageId:(id)a1 pageType:(id)a2 pageContext:(id)a3 fields:(id)a4;
- (id)sampling;

@end

@class NSString;
@protocol AMSBagProtocol;

@interface AMSUIPaymentVerificationMetrics : NSObject

@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) NSString *displayReason;

+ (id)_event;
+ (id)_metricsInstanceWithBag:(id)a0;

- (void)flushEvents;
- (void).cxx_destruct;
- (id)_propertiesWithPageId:(id)a0 displayReason:(id)a1;
- (id)_propertiesWithTargetId:(id)a0 pageId:(id)a1 displayReason:(id)a2;
- (void)enqueueEventWithPageId:(id)a0 displayReason:(id)a1;
- (void)enqueueEventWithTargetId:(id)a0 pageId:(id)a1 displayReason:(id)a2;
- (id)initWithBag:(id)a0 appID:(id)a1;

@end

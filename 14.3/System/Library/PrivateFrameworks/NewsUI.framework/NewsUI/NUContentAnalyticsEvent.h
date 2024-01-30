@class SXAnalyticsEvent, NSString;

@interface NUContentAnalyticsEvent : NSObject <NUAnalyticsEvent>

@property (readonly, nonatomic) SXAnalyticsEvent *event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEvent:(id)a0;

@end

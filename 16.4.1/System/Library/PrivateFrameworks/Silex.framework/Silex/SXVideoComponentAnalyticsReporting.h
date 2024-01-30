@class NSString, SXVideoComponent;
@protocol SXAnalyticsReporting;

@interface SXVideoComponentAnalyticsReporting : NSObject <SXAnalyticsReporting>

@property (readonly, nonatomic) SXVideoComponent *component;
@property (readonly, weak, nonatomic) id<SXAnalyticsReporting> analyticsReporting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithComponent:(id)a0 analyticsProviding:(id)a1;

@end

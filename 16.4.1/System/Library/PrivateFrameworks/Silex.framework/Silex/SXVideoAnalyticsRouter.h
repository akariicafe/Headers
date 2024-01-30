@class NSString, NSMutableDictionary;

@interface SXVideoAnalyticsRouter : NSObject <SXAnalyticsReporting>

@property (readonly, nonatomic) unsigned long long initiatedPlaybackLocation;
@property (readonly, nonatomic) NSMutableDictionary *reporters;
@property (nonatomic) BOOL hasReroutedInitiatedPlaybackEvent;
@property (nonatomic) unsigned long long currentPlaybackLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportEvent:(id)a0;
- (void).cxx_destruct;
- (id)analyticsReporterForEvent:(id)a0;
- (id)initWithInitiatedPlaybackLocation:(unsigned long long)a0 analyticsReporter:(id)a1;
- (id)reporterForPlaybackLocation:(unsigned long long)a0;
- (void)setAnalyticsReporter:(id)a0 forPlaybackLocation:(unsigned long long)a1;

@end

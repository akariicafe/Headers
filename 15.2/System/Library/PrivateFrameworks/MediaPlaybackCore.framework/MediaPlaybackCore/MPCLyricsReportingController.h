@class MPCJinglePlayActivityReportingController, NSString, MPCReportingPlaybackObserver;

@interface MPCLyricsReportingController : NSObject <ICEnvironmentMonitorObserver>

@property (retain, nonatomic) MPCJinglePlayActivityReportingController *jinglePlayActivityReportingController;
@property (retain, nonatomic) MPCReportingPlaybackObserver *reportingPlaybackObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

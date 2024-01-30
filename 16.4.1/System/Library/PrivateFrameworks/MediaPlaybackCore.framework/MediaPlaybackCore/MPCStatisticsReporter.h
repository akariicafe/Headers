@class NSString, NSObject, MPCPlaybackEngine;
@protocol OS_dispatch_queue;

@interface MPCStatisticsReporter : NSObject {
    NSObject<OS_dispatch_queue> *_writerQueue;
}

@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (readonly, copy, nonatomic) NSString *recordScenarioName;

- (void)flush;
- (id)init;
- (id)description;
- (id)coreAnalyticsEventName;
- (void).cxx_destruct;
- (void)_clearLocalReports;
- (id)_reportDirectoryURL;
- (id)_reportingFileForRecorder:(id)a0 extension:(id)a1;
- (void)_sendAnalyticsData;
- (void)_writeAnalyticsDataFromRecorder:(id)a0;
- (void)_writeData:(id)a0 toFileAtPath:(id)a1;
- (void)_writeSamplesFromRecorder:(id)a0;
- (void)reportRecordedResults:(id)a0;

@end

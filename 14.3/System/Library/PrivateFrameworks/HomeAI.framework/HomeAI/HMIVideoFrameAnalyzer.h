@class NSUUID, NSString, MovingAverage;
@protocol HMIVideoFrameAnalyzerDelegate;

@interface HMIVideoFrameAnalyzer : HMIVideoProcessingNode <HMFLogging> {
    MovingAverage *_analysisTime;
}

@property (weak) id<HMIVideoFrameAnalyzerDelegate> delegate;
@property (readonly) double averageAnalysisTime;
@property (readonly) NSUUID *sessionIdentifier;
@property BOOL recognizeFaces;
@property (retain) NSUUID *homeUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end

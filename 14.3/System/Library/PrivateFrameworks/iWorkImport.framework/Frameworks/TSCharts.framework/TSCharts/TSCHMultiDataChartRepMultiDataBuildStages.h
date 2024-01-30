@class TSCHMultiDataChartRep;

@interface TSCHMultiDataChartRepMultiDataBuildStages : NSObject <TSCHUnretainedParent> {
    TSCHMultiDataChartRep *mRep;
    struct _NSRange { unsigned long long location; unsigned long long length; } mStages;
    double mTotalDuration;
}

@property (readonly, nonatomic) unsigned long long currentStage;
@property (readonly, nonatomic) double duration;

+ (unsigned long long)numberOfFadingBuildStages;
+ (unsigned long long)dataSetIndexForRep:(id)a0 buildStage:(unsigned long long)a1;
+ (id)buildStagesWithRep:(id)a0 stages:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 totalDuration:(double)a2;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)hasStage;
- (void)clearParent;
- (id)chartLayout;
- (id)initWithRep:(id)a0 stages:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 totalDuration:(double)a2;
- (void)setupLayoutDataSetIndexForCurrentStage;
- (unsigned long long)dataSetIndexForStage:(unsigned long long)a0;
- (BOOL)isBackgroundOnlyStage:(unsigned long long)a0;
- (void)setupLayoutDataSetIndexForNextStage;
- (BOOL)isBackgroundOnly;
- (BOOL)isLastStageBackgroundOnly;
- (BOOL)isFadingInLayers;
- (void)advanceStage;

@end

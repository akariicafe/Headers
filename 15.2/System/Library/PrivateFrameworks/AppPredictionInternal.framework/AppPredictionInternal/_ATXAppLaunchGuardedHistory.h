@class _ATXAppDailyDose, ATXHeroPoiManager, _ATXDuetHelper, _ATXAppLaunchSequenceManager, _ATXAppLaunchHistogramManager, NSMutableArray, _ATXAppInfoManager;
@protocol ATXPredictionContextBuilderProtocol;

@interface _ATXAppLaunchGuardedHistory : NSObject {
    NSMutableArray *_deltaLog;
    _ATXDuetHelper *_duetHelper;
    _ATXAppDailyDose *_appDailyDose;
    _ATXAppInfoManager *_appInfoManager;
    _ATXAppLaunchHistogramManager *_appLaunchHistogramManager;
    _ATXAppLaunchSequenceManager *_appLaunchSequenceManager;
    id<ATXPredictionContextBuilderProtocol> _contextBuilder;
    ATXHeroPoiManager *_heroPoiManager;
}

- (void).cxx_destruct;

@end

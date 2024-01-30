@interface TVPMediaItemTimingData : NSObject

@property (nonatomic) double totalInitialLoadingTime;
@property (nonatomic) double startTimeForPreparingForLoading;
@property (nonatomic) double endTimeForPreparingForLoading;
@property (nonatomic) double startTimeForLoadingAVAssetKeys;
@property (nonatomic) double endTimeForLoadingAVAssetKeys;
@property (nonatomic) double startTimeForPreparingForPlaybackInitiation;
@property (nonatomic) double endTimeForPreparingForPlaybackInitiation;
@property (nonatomic) double startTimeForAVPlayerItemLoading;
@property (nonatomic) double endTimeForAVPlayerItemLoading;
@property (nonatomic) double startTimeForBuffering;
@property (nonatomic) double endTimeForBuffering;
@property (nonatomic) BOOL initialLoadingComplete;

@end

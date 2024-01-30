@protocol PUEditableAsset;

@interface PUEnterEditPerformanceEventBuilder : NSObject

@property (retain, nonatomic) id<PUEditableAsset> asset;
@property (nonatomic, getter=isFirstSinceBoot) BOOL firstSinceBoot;
@property (nonatomic, getter=isFirstSinceLaunch) BOOL firstSinceLaunch;
@property (nonatomic, getter=isEditingWithRaw) BOOL editingWithRaw;
@property (nonatomic) double enterEditDuration;
@property (nonatomic) double resourceCheckingDuration;
@property (nonatomic) double resourceDownloadDuration;
@property (nonatomic) double resourceLoadingDuration;
@property (nonatomic) double autoCalcDuration;

- (void).cxx_destruct;
- (id)buildEvent;

@end

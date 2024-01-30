@class PICompositionController;
@protocol PUEditableAsset;

@interface PUExitEditPerformanceEventBuilder : NSObject

@property (retain, nonatomic) id<PUEditableAsset> asset;
@property (nonatomic, getter=isFirstSinceLaunch) BOOL firstSinceLaunch;
@property (nonatomic, getter=isEditingWithRaw) BOOL editingWithRaw;
@property (nonatomic) long long sessionEndReason;
@property (nonatomic) double exitEditDuration;
@property (copy, nonatomic) PICompositionController *compositionController;

- (void).cxx_destruct;
- (id)buildEvent;

@end

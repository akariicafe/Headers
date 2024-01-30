@class NSString, NUComposition, PICompositionController;
@protocol PEAsset;

@interface PEEditSessionEventBuilder : NSObject

@property (retain, nonatomic) id<PEAsset> asset;
@property (nonatomic, getter=isFirstSinceLaunch) BOOL firstSinceLaunch;
@property (nonatomic) double enterEditDuration;
@property (nonatomic) double resourceCheckingDuration;
@property (nonatomic) double resourceDownloadDuration;
@property (nonatomic) double resourceLoadingDuration;
@property (nonatomic) double autoCalcDuration;
@property (nonatomic) double exitEditDuration;
@property (nonatomic) double editSessionDuration;
@property (nonatomic) long long sessionEndReason;
@property (copy, nonatomic) NUComposition *initialComposition;
@property (copy, nonatomic) PICompositionController *compositionController;
@property (retain, nonatomic) NSString *adjustmentIdentifierAndVersion;

+ (id)allowedAdjustmentIdentifiers;

- (id)initWithLegacyEnterEditEvent:(id)a0 andExitEvent:(id)a1;
- (void).cxx_destruct;
- (id)buildEvent;
- (BOOL)shouldReportAdjustmentIdentifierString:(id)a0;

@end

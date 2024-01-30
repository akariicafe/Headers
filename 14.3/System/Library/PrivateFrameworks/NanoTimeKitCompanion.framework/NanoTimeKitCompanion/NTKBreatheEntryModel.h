@interface NTKBreatheEntryModel : NTKTimelineEntryModel

@property (nonatomic) unsigned long long minutesBreathed;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL isLocked;

+ (id)companionModel;
+ (id)lockedEntryModel;
+ (BOOL)supportsFlowerImages;
+ (BOOL)familySupportsLiveData:(long long)a0;
+ (id)modelWithActivitySummary:(id)a0;

- (id)templateForComplicationFamily:(long long)a0;
- (id)_modularSmallTemplate;
- (id)_circularSmallTemplate;
- (id)_utilitarianSmallTemplate;
- (id)_extraLargeTemplate;
- (id)_signatureCircularTemplate;
- (id)_signatureBezelTemplate;
- (id)_signatureCornerTemplate;
- (id)_signatureExtraLargeTemplate;
- (id)_circularMediumTemplate;

@end

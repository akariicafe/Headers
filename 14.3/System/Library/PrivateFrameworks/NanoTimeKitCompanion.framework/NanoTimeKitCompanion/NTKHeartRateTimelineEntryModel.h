@class NSArray, NSDate;

@interface NTKHeartRateTimelineEntryModel : NTKTimelineEntryModel

@property (retain, nonatomic) NSDate *measurementDate;
@property (nonatomic) long long BPM;
@property (nonatomic) BOOL hasBPM;
@property (nonatomic) BOOL lessThanMinute;
@property (nonatomic, getter=isLocked) BOOL locked;
@property (nonatomic) BOOL hasSummary;
@property (nonatomic) long long dailyLowBPM;
@property (nonatomic) long long dailyHighBPM;
@property (retain, nonatomic) NSArray *chartPoints;

- (void).cxx_destruct;
- (id)templateForComplicationFamily:(long long)a0;
- (id)_newExtraLargeTemplate;
- (id)_newSignatureBezelTemplate;
- (id)_newSignatureCircularTemplate;
- (id)_newSignatureExtraLargeCircularTemplate;
- (id)_newSignatureCornerTemplate;
- (id)_newSignatureRectangularTemplate;
- (id)_newUtilitarianSmallFlatTemplate;
- (id)_newUtilitarianSmallTemplate;
- (id)_newUtilitarianLargeTemplate;
- (id)_newModularSmallTemplate;
- (id)_newModularLargeTemplate;
- (id)_newCircularTemplateUsingMediumSize:(BOOL)a0;
- (id)_bpmString;
- (id)_heartrateString;
- (id)_signatureBezelTextProvider;
- (id)_metadataWithCurrentMeasurements;

@end

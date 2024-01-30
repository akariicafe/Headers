@class NSString, NSDate;

@interface NTKAlarmTimelineEntry : NTKTimelineEntryModel

@property (nonatomic) unsigned long long entryType;
@property (retain, nonatomic) NSString *alarmLabel;
@property (retain, nonatomic) NSDate *fireDate;
@property (retain, nonatomic) NSDate *snoozeDate;

+ (id)companionModel;

- (void).cxx_destruct;
- (id)description;
- (id)templateForComplicationFamily:(long long)a0;
- (id)_newCircularMediumTemplate;
- (id)_newSmallModularTemplate;
- (id)_newLargeModularTemplate;
- (id)_newCircularSmallTemplate;
- (id)_newSmallFlatUtilityTemplate;
- (id)_newExtraLargeTemplate;
- (id)_newSignatureBezelTemplate;
- (id)_newSignatureCircularTemplate;
- (id)_newSignatureExtraLargeCircularTemplate;
- (id)_newLargeUtilityTemplate;
- (id)_newSignatureCornerTemplate;
- (id)_newSignatureRectangularTemplate;
- (id)_activeStateTimeTextProvider;
- (id)_snoozeStateDateTextProvider;
- (id)_modularSmallAlarmInactiveImageProvider;
- (void)_makeAlarmStackTextTimeProvider:(id *)a0 designatorProvider:(id *)a1 designatorExists:(BOOL *)a2 designatorLeads:(BOOL *)a3;
- (id)_circularTemplateForAlarm:(BOOL)a0;
- (id)_largeUtilityInactiveImageProvider;
- (id)_extraLargeAlarmInactiveImageProvider;
- (id)_richCircularMetadata;
- (id)_activeStateTimeRelativeDateTextProvider;

@end

@class NSString, CLKDevice, NSDate;

@interface NTKAlarmTimelineEntry : NTKTimelineEntryModel {
    CLKDevice *_device;
}

@property (nonatomic) unsigned long long entryType;
@property (retain, nonatomic) NSString *alarmLabel;
@property (retain, nonatomic) NSDate *fireDate;
@property (retain, nonatomic) NSDate *snoozeDate;

+ (id)companionModelWithDevice:(id)a0;

- (id)initWithDevice:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)templateForComplicationFamily:(long long)a0;
- (id)_newSmallModularTemplate;
- (id)_newLargeModularTemplate;
- (id)_newCircularSmallTemplate;
- (id)_newSmallFlatUtilityTemplate;
- (id)_newLargeUtilityTemplate;
- (id)_newExtraLargeTemplate;
- (id)_newSignatureCornerTemplate;
- (id)_newSignatureCircularTemplate;
- (id)_newSignatureExtraLargeCircularTemplate;
- (id)_newSignatureBezelTemplate;
- (id)_newSignatureRectangularTemplate;
- (id)_newCircularMediumTemplate;
- (BOOL)_pairedDeviceSupportsComplicationSymbols;
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

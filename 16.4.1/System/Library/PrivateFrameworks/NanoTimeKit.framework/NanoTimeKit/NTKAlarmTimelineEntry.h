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
- (id)_activeStateTimeRelativeDateTextProvider;
- (id)_activeStateTimeTextProvider;
- (id)_circularTemplateForAlarm:(BOOL)a0;
- (id)_extraLargeAlarmInactiveImageProvider;
- (id)_getAlarmImageProviderWithActiveStatus:(BOOL)a0;
- (id)_largeUtilityInactiveImageProvider;
- (void)_makeAlarmStackTextTimeProvider:(id *)a0 designatorProvider:(id *)a1 designatorExists:(BOOL *)a2 designatorLeads:(BOOL *)a3;
- (id)_modularSmallAlarmInactiveImageProvider;
- (id)_newCircularMediumTemplate;
- (id)_newCircularSmallTemplate;
- (id)_newExtraLargeTemplate;
- (id)_newLargeModularTemplate;
- (id)_newLargeUtilityTemplate;
- (id)_newSignatureBezelTemplate;
- (id)_newSignatureCircularTemplate;
- (id)_newSignatureCornerTemplate;
- (id)_newSignatureExtraLargeCircularTemplate;
- (id)_newSignatureRectangularTemplate;
- (id)_newSmallFlatUtilityTemplate;
- (id)_newSmallModularTemplate;
- (BOOL)_pairedDeviceSupportsComplicationSymbols;
- (id)_richCircularMetadata;
- (id)_snoozeStateDateTextProvider;
- (id)templateForComplicationFamily:(long long)a0;

@end

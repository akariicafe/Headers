@class NSString, NWMTemperatureFormatter;
@protocol NWCTemplateFormattable;

@interface NWCWeatherTemplateFormatter : NSObject <NWCTemplateFormattable>

@property (class, readonly) id<NWCTemplateFormattable> sharedFormatter;

@property (retain, nonatomic) NWMTemperatureFormatter *temperatureFormatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;
- (id)switcherTemplateWithFamily:(long long)a0;
- (id)graphicCircularTemplateForEntryModel:(id)a0;
- (id)_richCircularTemplateForComplicationFamily:(long long)a0 entryModel:(id)a1;
- (id)circularSmallTemplateForEntryModel:(id)a0;
- (id)extraLargeTemplateForEntryModel:(id)a0;
- (id)graphicBezelTemplateForEntryModel:(id)a0;
- (id)graphicCornerTemplateForEntryModel:(id)a0;
- (id)graphicExtraLargeCircularTemplateForEntryModel:(id)a0;
- (id)modularSmallTemplateForEntryModel:(id)a0;
- (id)utilitarianSmallTemplateForEntryModel:(id)a0;
- (id)circularMediumTemplateForEntryModel:(id)a0;
- (id)modularLargeTemplateForLocation:(id)a0 isLocalLocation:(BOOL)a1 entryModel:(id)a2;
- (id)utilitarianLargeTemplateForEntryModel:(id)a0;

@end

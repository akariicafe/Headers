@class NSString, NWMTemperatureFormatter, CLKTextProvider;
@protocol NWCTemplateFormattable;

@interface NWCConditionsTemplateFormatter : NSObject <NWCTemplateFormattable>

@property (class, readonly) id<NWCTemplateFormattable> sharedFormatter;

@property (retain, nonatomic) NWMTemperatureFormatter *temperatureFormatter;
@property (retain, nonatomic) CLKTextProvider *noDataTextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)_codeForConditions:(id)a0;

- (void).cxx_destruct;
- (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;
- (id)switcherTemplateWithFamily:(long long)a0;
- (id)_nonRichSymbolProviderForModel:(id)a0;
- (id)graphicCircularTemplateForEntryModel:(id)a0;
- (id)_richCircularTemplateForComplicationFamily:(long long)a0 entryModel:(id)a1;
- (id)_graphicRectangularTemplateWithTextProvider:(id)a0 hourlyForecastEntryModels:(id)a1 timeZone:(id)a2;
- (id)circularSmallTemplateForEntryModel:(id)a0;
- (id)extraLargeTemplateForEntryModel:(id)a0;
- (id)graphicBezelTemplateForEntryModel:(id)a0;
- (id)graphicCornerTemplateForEntryModel:(id)a0;
- (id)graphicRectangularTemplateForLocalLocation:(BOOL)a0 timeZone:(id)a1 entryModel:(id)a2;
- (id)graphicExtraLargeCircularTemplateForEntryModel:(id)a0;
- (id)modularSmallTemplateForEntryModel:(id)a0;
- (id)utilitarianSmallTemplateForEntryModel:(id)a0;
- (id)circularMediumTemplateForEntryModel:(id)a0;

@end

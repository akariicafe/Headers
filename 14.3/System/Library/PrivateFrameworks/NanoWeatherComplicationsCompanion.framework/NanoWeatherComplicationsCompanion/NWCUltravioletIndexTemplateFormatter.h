@class NSString, NSNumberFormatter;
@protocol NWCTemplateFormattable;

@interface NWCUltravioletIndexTemplateFormatter : NSObject <NWCTemplateFormattable>

@property (class, readonly) id<NWCTemplateFormattable> sharedFormatter;

@property (retain, nonatomic) NSNumberFormatter *indexNumberFormatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;
- (id)switcherTemplateWithFamily:(long long)a0;
- (id)_localizedIndexForConditions:(id)a0;
- (id)circularSmallTemplateForConditions:(id)a0;
- (id)extraLargeTemplateForConditions:(id)a0;
- (id)modularLargeTemplateForLocation:(id)a0 isLocalLocation:(BOOL)a1 conditions:(id)a2;
- (id)utilitarianSmallTemplateForConditions:(id)a0;
- (id)circularMediumTemplateForConditions:(id)a0;
- (id)graphicCircularTemplateForConditions:(id)a0;
- (id)_richCircularTemplateForFamily:(long long)a0 conditions:(id)a1;
- (id)_graphicRectangularTemplateWithTextProvider:(id)a0 conditions:(id)a1 sevenDayDailyForecastedConditions:(id)a2 timeZone:(id)a3;
- (id)graphicBezelTemplateForConditions:(id)a0;
- (id)graphicCornerTemplateForConditions:(id)a0;
- (id)graphicRectangularTemplateForLocalLocation:(BOOL)a0 timeZone:(id)a1 conditions:(id)a2 dailyForecastedConditions:(id)a3;
- (id)graphicExtraLargeCircularTemplateForConditions:(id)a0;
- (id)modularSmallTemplateForConditions:(id)a0;
- (id)utilitarianLargeTemplateForConditions:(id)a0;

@end

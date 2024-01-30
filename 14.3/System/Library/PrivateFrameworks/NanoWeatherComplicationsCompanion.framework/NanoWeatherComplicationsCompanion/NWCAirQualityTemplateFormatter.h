@class NSString, NSNumberFormatter;
@protocol NWCTemplateFormattable;

@interface NWCAirQualityTemplateFormatter : NSObject <NWCTemplateFormattable>

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
- (id)graphicCircularTemplateForConditions:(id)a0 location:(id)a1;
- (id)_richCircularTemplateForComplicationFamily:(long long)a0 conditions:(id)a1 location:(id)a2;
- (id)circularSmallTemplateForConditions:(id)a0;
- (id)extraLargeTemplateForConditions:(id)a0;
- (id)graphicBezelTemplateForConditions:(id)a0 location:(id)a1;
- (id)graphicCornerTemplateForConditions:(id)a0 location:(id)a1;
- (id)graphicExtraLargeTemplateForConditions:(id)a0 location:(id)a1;
- (id)modularLargeTemplateForLocation:(id)a0 isLocalLocation:(BOOL)a1 conditions:(id)a2;
- (id)modularSmallTemplateForLocation:(id)a0 conditions:(id)a1;
- (id)utilitarianLargeTemplateForLocation:(id)a0 conditions:(id)a1;
- (id)utilitarianSmallTemplateForConditions:(id)a0;
- (id)circularMediumTemplateForConditions:(id)a0;

@end

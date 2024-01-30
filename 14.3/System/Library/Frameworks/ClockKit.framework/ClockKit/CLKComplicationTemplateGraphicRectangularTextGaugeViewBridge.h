@class NSData, CLKGaugeProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicRectangularTextGaugeViewBridge : CLKComplicationTemplate

@property (retain, nonatomic) NSData *headerLabelData;
@property (copy, nonatomic) CLKTextProvider *headerTextProvider;
@property (copy, nonatomic) CLKTextProvider *bodyTextProvider;
@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider;

- (void).cxx_destruct;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateSwiftUIViewDataKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (id)viewDataKeyForSwiftUIViewKey:(id)a0;
- (BOOL)usesSwiftUI;
- (BOOL)needsSerializableCopy;
- (id)serializableCopyWithImageProviders:(id)a0;

@end

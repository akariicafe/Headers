@class CLKTextProvider, NSData, CLKGaugeProvider;

@interface CLKComplicationTemplateGraphicCircularOpenGaugeViewBridge : CLKComplicationTemplateGraphicCircular

@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider;
@property (copy, nonatomic) CLKTextProvider *centerTextProvider;
@property (retain, nonatomic) NSData *bottomLabelData;

- (void).cxx_destruct;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateSwiftUIViewDataKeysWithBlock:(id /* block */)a0;
- (id)viewDataKeyForSwiftUIViewKey:(id)a0;
- (BOOL)usesSwiftUI;
- (BOOL)needsSerializableCopy;
- (id)serializableCopyWithImageProviders:(id)a0;

@end

@class NSData, CLKGaugeProvider;

@interface CLKComplicationTemplateGraphicExtraLargeCircularClosedGaugeViewBridge : CLKComplicationTemplateGraphicExtraLargeCircular

@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider;
@property (retain, nonatomic) NSData *labelData;

- (void).cxx_destruct;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateSwiftUIViewDataKeysWithBlock:(id /* block */)a0;
- (BOOL)needsSerializableCopy;
- (id)serializableCopyWithImageProviders:(id)a0;
- (BOOL)usesSwiftUI;
- (id)viewDataKeyForSwiftUIViewKey:(id)a0;

@end

@class NSData, CLKTextProvider;

@interface CLKComplicationTemplateGraphicCircularStackViewTextBridge : CLKComplicationTemplateGraphicCircular

@property (retain, nonatomic) NSData *contentData;
@property (copy, nonatomic) CLKTextProvider *textProvider;

- (void).cxx_destruct;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateSwiftUIViewDataKeysWithBlock:(id /* block */)a0;
- (id)viewDataKeyForSwiftUIViewKey:(id)a0;
- (BOOL)usesSwiftUI;
- (BOOL)needsSerializableCopy;
- (id)serializableCopyWithImageProviders:(id)a0;

@end

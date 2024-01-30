@class NSData, CLKTextProvider;

@interface CLKComplicationTemplateGraphicCornerTextViewBridge : CLKComplicationTemplate

@property (copy, nonatomic) CLKTextProvider *textProvider;
@property (retain, nonatomic) NSData *labelData;

- (void).cxx_destruct;
- (void)_enumerateSwiftUIViewDataKeysWithBlock:(id /* block */)a0;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (BOOL)needsSerializableCopy;
- (id)serializableCopyWithImageProviders:(id)a0;
- (BOOL)usesSwiftUI;
- (id)viewDataKeyForSwiftUIViewKey:(id)a0;

@end

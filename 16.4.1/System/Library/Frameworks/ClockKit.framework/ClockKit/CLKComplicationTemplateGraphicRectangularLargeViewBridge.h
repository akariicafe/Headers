@class NSData, CLKTextProvider;

@interface CLKComplicationTemplateGraphicRectangularLargeViewBridge : CLKComplicationTemplate

@property (copy, nonatomic) CLKTextProvider *headerTextProvider;
@property (retain, nonatomic) NSData *contentData;

- (void).cxx_destruct;
- (void)_enumerateSwiftUIViewDataKeysWithBlock:(id /* block */)a0;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (BOOL)needsSerializableCopy;
- (id)serializableCopyWithImageProviders:(id)a0;
- (BOOL)usesSwiftUI;
- (id)viewDataKeyForSwiftUIViewKey:(id)a0;

@end

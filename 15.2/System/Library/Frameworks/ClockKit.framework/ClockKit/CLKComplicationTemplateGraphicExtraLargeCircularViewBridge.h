@class NSData;

@interface CLKComplicationTemplateGraphicExtraLargeCircularViewBridge : CLKComplicationTemplateGraphicExtraLargeCircular

@property (retain, nonatomic) NSData *contentData;

- (void).cxx_destruct;
- (void)_enumerateSwiftUIViewDataKeysWithBlock:(id /* block */)a0;
- (id)viewDataKeyForSwiftUIViewKey:(id)a0;
- (BOOL)usesSwiftUI;
- (BOOL)needsSerializableCopy;
- (id)serializableCopyWithImageProviders:(id)a0;

@end

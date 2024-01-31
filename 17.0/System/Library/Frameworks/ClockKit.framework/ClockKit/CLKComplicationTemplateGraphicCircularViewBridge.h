@class NSData;

@interface CLKComplicationTemplateGraphicCircularViewBridge : CLKComplicationTemplateGraphicCircular

@property (retain, nonatomic) NSData *contentData;

- (void).cxx_destruct;
- (void)_enumerateSwiftUIViewDataKeysWithBlock:(id /* block */)a0;
- (BOOL)needsSerializableCopy;
- (id)serializableCopyWithImageProviders:(id)a0;
- (BOOL)usesSwiftUI;
- (id)viewDataKeyForSwiftUIViewKey:(id)a0;

@end

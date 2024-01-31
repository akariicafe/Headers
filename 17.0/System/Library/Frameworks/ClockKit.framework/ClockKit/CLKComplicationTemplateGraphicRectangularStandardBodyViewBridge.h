@class NSData, CLKTextProvider;

@interface CLKComplicationTemplateGraphicRectangularStandardBodyViewBridge : CLKComplicationTemplate

@property (retain, nonatomic) NSData *headerLabelData;
@property (copy, nonatomic) CLKTextProvider *headerTextProvider;
@property (copy, nonatomic) CLKTextProvider *body1TextProvider;
@property (copy, nonatomic) CLKTextProvider *body2TextProvider;

- (void).cxx_destruct;
- (void)_enumerateSwiftUIViewDataKeysWithBlock:(id /* block */)a0;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (BOOL)needsSerializableCopy;
- (id)serializableCopyWithImageProviders:(id)a0;
- (BOOL)usesSwiftUI;
- (id)viewDataKeyForSwiftUIViewKey:(id)a0;

@end

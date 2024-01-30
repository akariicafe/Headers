@interface CHSMutableConfiguredWidgetDescriptor : CHSConfiguredWidgetDescriptor

@property (nonatomic, getter=isSuggestion) BOOL suggestion;
@property (nonatomic, getter=isSystemConfigured) BOOL systemConfigured;
@property (nonatomic) unsigned long long supportedColorSchemes;
@property (nonatomic) unsigned long long supportedRenderingModes;
@property (nonatomic) BOOL supportsLowLuminance;
@property (nonatomic) BOOL showsWidgetLabel;
@property (nonatomic) BOOL supportsTinting;
@property (nonatomic) BOOL showsComplicationLabel;

- (void)setSupportsLowLuminance:(BOOL)a0;
- (void)setShowsWidgetLabel:(BOOL)a0;
- (void)setSuggestion:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSystemConfigured:(BOOL)a0;
- (void)setSupportedColorSchemes:(unsigned long long)a0;
- (void)setSupportedRenderingModes:(unsigned long long)a0;

@end

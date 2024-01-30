@class NSString;
@protocol SXDarkModePolicyHandler, SXNamespacedObjectFactory, SXDarkModeConfiguration;

@interface SXDarkModeModifier : NSObject <SXDOMModifying>

@property (readonly, nonatomic) id<SXDarkModePolicyHandler> policyHandler;
@property (readonly, nonatomic) id<SXDarkModeConfiguration> configuration;
@property (readonly, nonatomic) id<SXNamespacedObjectFactory> namespacedObjectFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPolicyHandler:(id)a0 configuration:(id)a1 namespacedObjectFactory:(id)a2;
- (id)invertedDataTableColumnStyle:(id)a0;
- (id)invertColor:(id)a0 defaultColor:(id)a1;
- (id)invertedDataTableBorderSides:(id)a0;
- (id)invertedDropCapStyle:(id)a0;
- (id)invertedComponentStyle:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)invertedGradientFill:(id)a0;
- (id)invertedTextStyleForegroundColors:(id)a0 context:(id)a1;
- (id)invertedBorder:(id)a0;
- (id)invertedComponentTextStyleForegroundColors:(id)a0 context:(id)a1;
- (id)invertedLinearGradient:(id)a0;
- (void)invertForegroundColorsOfTextStyle:(id)a0 component:(id)a1 DOM:(id)a2 context:(id)a3;
- (void)invertBackgroundColorsOfTextStyle:(id)a0 component:(id)a1 DOM:(id)a2 context:(id)a3;
- (id)invertedComponent:(id)a0 context:(id)a1;
- (id)invertedTextShadow:(id)a0;
- (void)invertComponentStyle:(id)a0 component:(id)a1 DOM:(id)a2 context:(id)a3;
- (id)invertedTextDecoration:(id)a0;
- (id)invertedStrokeStyle:(id)a0;
- (void)modifyDOM:(id)a0 context:(id)a1;
- (id)invertedDataTableRowStyle:(id)a0;
- (id)invertedDataTableCellStyle:(id)a0;
- (id)invertedDocumentStyle:(id)a0 context:(id)a1;
- (id)invertedTextStyleBackgroundColors:(id)a0 context:(id)a1;
- (void)invertBackgroundColorsOfComponentTextStyle:(id)a0 component:(id)a1 DOM:(id)a2 context:(id)a3;
- (id)invertedDataTableBorder:(id)a0;
- (void)invertForegroundColorsOfComponentTextStyle:(id)a0 component:(id)a1 DOM:(id)a2 context:(id)a3;
- (id)invertedTextStroke:(id)a0;
- (id)invertedComponentShadow:(id)a0;
- (id)invertedComponentTextStyleBackgroundColors:(id)a0 context:(id)a1;
- (id)invertedDataTableStyle:(id)a0;

@end

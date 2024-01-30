@class NSArray, NSString;

@interface OKWidgetContentCompositeFilter : OKWidgetBasicFilter <JSOKWidgetContentCompositeFilter>

@property (retain, nonatomic) NSArray *inputFilters;
@property (retain, nonatomic) NSArray *inputBackgroundFilters;
@property (retain, nonatomic) NSString *inputCompositionFilterName;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;
+ (id)filterWithInputFilters:(id)a0 inputBackgroundFilters:(id)a1 inputCompositionFilterName:(id)a2;

- (id)inputKeys;
- (void)dealloc;
- (id)outputImage;
- (void)setSettingInputCompositionFilterName:(id)a0;
- (void)setSettingInputFilters:(id)a0;
- (void)setSettingInputBackgroundFilters:(id)a0;

@end

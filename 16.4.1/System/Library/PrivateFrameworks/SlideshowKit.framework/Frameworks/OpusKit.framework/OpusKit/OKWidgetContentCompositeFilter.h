@class NSArray, NSString;

@interface OKWidgetContentCompositeFilter : OKWidgetBasicFilter <JSOKWidgetContentCompositeFilter>

@property (retain, nonatomic) NSArray *inputFilters;
@property (retain, nonatomic) NSArray *inputBackgroundFilters;
@property (retain, nonatomic) NSString *inputCompositionFilterName;

+ (id)filterWithInputFilters:(id)a0 inputBackgroundFilters:(id)a1 inputCompositionFilterName:(id)a2;
+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (id)outputImage;
- (void)dealloc;
- (id)inputKeys;
- (void)setSettingInputBackgroundFilters:(id)a0;
- (void)setSettingInputCompositionFilterName:(id)a0;
- (void)setSettingInputFilters:(id)a0;

@end

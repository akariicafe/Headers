@class NSString, NSDateFormatter;

@interface WFDateFieldParameter : WFTextInputParameter <WFParameterDialogProvider>

@property (readonly, nonatomic) NSDateFormatter *hintDateFormatter;
@property (readonly, nonatomic) NSString *hintDateMode;
@property (readonly, nonatomic) NSString *reactiveParameterKey;
@property (readonly, nonatomic) NSString *localizedIncompleteHintString;
@property (readonly, nonatomic) BOOL timeOnlyMode;
@property (readonly, nonatomic) BOOL dateOnlyMode;
@property (readonly, nonatomic) BOOL detectsAllDayDates;
@property (readonly, nonatomic) BOOL displaysAllDayString;
@property (nonatomic) BOOL forcesAllDayDates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (void)createDialogRequestWithAttribution:(id)a0 defaultState:(id)a1 completionHandler:(id /* block */)a2;
- (id)parameterStateFromDialogResponse:(id)a0;
- (id)hintForState:(id)a0;
- (id)datePickerConfiguration;
- (id)dateFormatterForConfiguration:(id)a0;
- (id)createDialogTextFieldConfigurationWithDefaultState:(id)a0;

@end

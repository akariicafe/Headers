@class NSString, NSDictionary, NSURL, NSArray;

@interface WFJavaScriptStringRemoteQuarantineRequest : WFBaseRemoteQuarantineRequest

@property (nonatomic) unsigned long long runtimeType;
@property (retain, nonatomic) NSURL *targetURL;
@property (readonly, nonatomic) NSDictionary *preRuntimeJavaScriptSerializedRepresentation;
@property (readonly, nonatomic) NSString *preRuntimeJavaScriptString;
@property (copy, nonatomic) NSString *runtimeJavaScriptString;
@property (copy, nonatomic) NSArray *actionList;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)defaultLocalizedDeniedErrorMessage;
- (id)defaultLocalizedDeniedErrorTitle;
- (id)defaultLocalizedPromptMessage;
- (id)defaultLocalizedPromptTitle;
- (id)initWithWorkflow:(id)a0 runtimeType:(unsigned long long)a1 targetURL:(id)a2 preRuntimeVariableString:(id)a3 runtimeString:(id)a4;
- (id)policyFunctionName;

@end

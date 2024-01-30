@class NSString, WFActionParameterSummary, NSDictionary;

@interface WFOverridableLinkAction : WFLinkAction

@property (class, readonly, nonatomic) NSString *overrideInputParameterName;

@property (readonly, nonatomic) BOOL shouldOverrideName;
@property (readonly, nonatomic) BOOL shouldOverrideDescription;
@property (readonly, nonatomic) BOOL shouldOverrideParameterSummary;
@property (readonly, nonatomic) BOOL shouldOverrideParameterLabels;
@property (readonly, nonatomic) BOOL shouldOverrideSubcategory;
@property (readonly, nonatomic) NSString *overrideName;
@property (readonly, nonatomic) NSString *overrideDescriptionSummary;
@property (readonly, nonatomic) WFActionParameterSummary *overrideParameterSummary;
@property (readonly, nonatomic) NSDictionary *overrideLabelsByParameter;
@property (readonly, nonatomic) NSDictionary *overrideDefaultValuesByParameter;
@property (readonly, nonatomic) NSDictionary *serializationKeysByParameter;
@property (readonly, nonatomic) NSDictionary *parameterOverrides;
@property (readonly, nonatomic) NSString *appName;

+ (id)inputParameterMetadataWithActionMetadata:(id)a0;
+ (id)overrideInputParameterNames;

- (id)name;
- (id)parameterDefinitions;
- (BOOL)shouldLocalizeValueForSelector:(SEL)a0;
- (id)descriptionSummary;
- (BOOL)isPlatformProvidedUnderstandingAction;
- (id)parameterSummary;

@end

@class NSArray, ICAction;

@interface WFInterchangeAction : WFAction

@property (retain, nonatomic) NSArray *contentClasses;
@property (readonly, nonatomic) BOOL requiresCallback;
@property (readonly, nonatomic) ICAction *interchangeAction;

- (id)keywords;
- (BOOL)isDiscontinued;
- (id)shortName;
- (id)descriptionDictionary;
- (id)categories;
- (void).cxx_destruct;
- (id)creationDate;
- (BOOL)isDiscoverable;
- (id)description;
- (id)lastModifiedDate;
- (id)name;
- (id)app;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)outputContentClasses;
- (BOOL)inputRequired;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (BOOL)inputPassthrough;
- (BOOL)skipsProcessingHiddenParameters;
- (id)specifiedInputContentClasses;
- (id)specifiedOutputContentClasses;
- (id)inputContentClasses;
- (BOOL)outputsMultipleItems;
- (id)parameterSummary;
- (id)inputParameterKey;
- (BOOL)inputsMultipleItems;
- (id)subcategoryForCategory:(id)a0;
- (id)userInterfaceTypes;
- (id)requiredResources;
- (BOOL)neverSuggested;
- (void)performActionWithInput:(id)a0 parameters:(id)a1 userInterface:(id)a2 successHandler:(id /* block */)a3 errorHandler:(id /* block */)a4;
- (id)initWithInterchangeAction:(id)a0 serializedParameters:(id)a1;
- (id)initWithInterchangeAction:(id)a0 identifier:(id)a1 definition:(id)a2 serializedParameters:(id)a3;
- (BOOL)shouldSuppressCallback;
- (BOOL)callbackIsCurrentlyDisabled;
- (BOOL)mappedValueIsTrue:(id)a0 forContentMapping:(id)a1;
- (id)disabledPlatformsForInterchangeActionWithIdentifier:(id)a0;

@end

@class NSArray, INAppDescriptor, ICAction;

@interface WFInterchangeAction : WFAction {
    INAppDescriptor *_appDescriptor;
}

@property (retain, nonatomic) NSArray *contentClasses;
@property (readonly, nonatomic) BOOL requiresCallback;
@property (readonly, nonatomic) ICAction *interchangeAction;

- (id)shortName;
- (BOOL)isDiscoverable;
- (id)keywords;
- (id)categories;
- (BOOL)isDiscontinued;
- (id)creationDate;
- (id)app;
- (id)lastModifiedDate;
- (id)descriptionDictionary;
- (id)description;
- (void).cxx_destruct;
- (id)name;
- (id)appDescriptor;
- (BOOL)skipsProcessingHiddenParameters;
- (BOOL)appResourceRequiresAppInstall;
- (BOOL)callbackIsCurrentlyDisabled;
- (id)disabledPlatformsForInterchangeActionWithIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (id)initWithInterchangeAction:(id)a0 identifier:(id)a1 definition:(id)a2 serializedParameters:(id)a3;
- (id)initWithInterchangeAction:(id)a0 serializedParameters:(id)a1;
- (id)inputContentClasses;
- (id)inputParameterKey;
- (BOOL)inputPassthrough;
- (BOOL)inputRequired;
- (BOOL)inputsMultipleItems;
- (BOOL)mappedValueIsTrue:(id)a0 forContentMapping:(id)a1;
- (BOOL)neverSuggested;
- (id)outputContentClasses;
- (BOOL)outputsMultipleItems;
- (id)parameterSummary;
- (void)performActionWithInput:(id)a0 parameters:(id)a1 userInterface:(id)a2 successHandler:(id /* block */)a3 errorHandler:(id /* block */)a4;
- (id)requiredResources;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)setAppDescriptor:(id)a0;
- (BOOL)shouldSuppressCallback;
- (id)specifiedInputContentClasses;
- (id)specifiedOutputContentClasses;
- (id)subcategoryForCategory:(id)a0;
- (id)userInterfaceTypes;

@end

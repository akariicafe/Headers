@class NSString, WFContentAttributionTracker, WFParameter;
@protocol WFActionSandboxExtensionProvider, WFVariableDataSource;

@interface WFParameterStateProcessingContext : NSObject <WFActionSandboxExtensionProvider>

@property (readonly, nonatomic) id<WFVariableDataSource> variableSource;
@property (readonly, nonatomic) id<WFActionSandboxExtensionProvider> actionSandboxExtensionProvider;
@property (readonly, nonatomic) WFParameter *parameter;
@property (readonly, nonatomic) BOOL isInputParameter;
@property (readonly, nonatomic) long long environment;
@property (readonly, nonatomic) WFContentAttributionTracker *contentAttributionTracker;
@property (readonly, nonatomic) NSString *widgetSizeClass;
@property (readonly, nonatomic) long long maximumItemCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)addContentAttributionSet:(id)a0;
- (id)initWithVariableSource:(id)a0 actionSandboxExtensionProvider:(id)a1 parameter:(id)a2 isInputParameter:(BOOL)a3 environment:(long long)a4 contentAttributionTracker:(id)a5 widgetSizeClass:(id)a6;
- (void)requestSandboxExtensionForRunningActionWithAccessResources:(id)a0 completion:(id /* block */)a1;
- (BOOL)requestSandboxExtensionForRunningActionWithAccessResources:(id)a0 error:(id *)a1;

@end

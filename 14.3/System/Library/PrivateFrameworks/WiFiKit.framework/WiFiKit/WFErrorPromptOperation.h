@protocol WFErrorProviderContext;

@interface WFErrorPromptOperation : WFUserPromptOperation <WFNetworkView>

@property (retain, nonatomic) id<WFErrorProviderContext> context;
@property (readonly, nonatomic) BOOL wantsModalPresentation;

+ (id)errorPromptOperationWithContext:(id)a0;

@end

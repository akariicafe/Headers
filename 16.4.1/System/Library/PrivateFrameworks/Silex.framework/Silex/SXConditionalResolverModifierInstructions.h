@class NSString;
@protocol SXHintsConfigurationOptionProvider, SXDocumentProviding;

@interface SXConditionalResolverModifierInstructions : NSObject <SXConditionalResolverModifierInstructions>

@property (readonly, nonatomic) id<SXDocumentProviding> documentProvider;
@property (readonly, nonatomic) id<SXHintsConfigurationOptionProvider> hintsConfigurationOptionProvider;
@property (readonly, nonatomic) BOOL shouldResolveAutoplacement;
@property (readonly, nonatomic) BOOL shouldResolveComponents;
@property (readonly, nonatomic) BOOL shouldResolveComponentLayouts;
@property (readonly, nonatomic) BOOL shouldResolveComponentStyles;
@property (readonly, nonatomic) BOOL shouldResolveComponentTextStyles;
@property (readonly, nonatomic) BOOL shouldResolveDocumentStyle;
@property (readonly, nonatomic) BOOL shouldResolveTextStyles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)hints;
- (id)initWithDocumentProvider:(id)a0 hintsConfigurationOptionProvider:(id)a1;

@end

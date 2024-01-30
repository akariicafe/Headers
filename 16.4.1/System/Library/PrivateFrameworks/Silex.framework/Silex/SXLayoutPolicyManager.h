@class NSString;
@protocol SXHintsConfigurationOptionProvider, SXDocumentProviding;

@interface SXLayoutPolicyManager : NSObject <SXLayoutPolicyManager>

@property (readonly, nonatomic) id<SXDocumentProviding> documentProvider;
@property (readonly, nonatomic) id<SXHintsConfigurationOptionProvider> hintsConfigurationOptionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDocumentProvider:(id)a0 hintsConfigurationOptionProvider:(id)a1;
- (BOOL)shouldPerformLayoutWithLayoutOptionsDiff:(unsigned long long)a0;

@end

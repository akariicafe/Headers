@class NSString;
@protocol SXHintsConfigurationOption, SXRenderingConfigurationProvider, SXDocumentProviding;

@interface SXRenderingConfigurationOptionsManager : NSObject <SXHintsConfigurationOptionProvider>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) id<SXDocumentProviding> documentProvider;
@property (readonly, nonatomic) id<SXRenderingConfigurationProvider> configurationProvider;
@property (readonly, nonatomic) id<SXHintsConfigurationOption> hints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

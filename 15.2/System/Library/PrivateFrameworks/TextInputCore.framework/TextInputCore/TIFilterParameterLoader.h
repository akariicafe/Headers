@class NSObject;
@protocol OS_dispatch_queue;

@interface TIFilterParameterLoader : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *loadQueue;

- (void)loadCandidateQualityParameterOverriesForLanguageIdentifier:(id)a0 targetQueue:(id)a1 completion:(id /* block */)a2;
- (id)parameterOverridesFolderURL;
- (void).cxx_destruct;
- (id)init;
- (id)loadContentsForPlistWithLanguage:(id)a0;
- (id)parameterPlistForLanguage:(id)a0;

@end

@class NSString, _PASBundleIdResolver, PSGExperimentResolver;
@protocol PSGInternalServerProtocol;

@interface PSGInternalRequestHandler : NSObject <PSGInternalServerProtocol> {
    id<PSGInternalServerProtocol> _clientProxy;
    PSGExperimentResolver *_experimentResolver;
}

@property (copy, nonatomic) NSString *clientProcessName;
@property (retain, nonatomic) _PASBundleIdResolver *bundleIdResolver;

- (void)setRemoteObjectProxy:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)sysdiagnoseInformationWithCompletion:(id /* block */)a0;
- (id)_getWordBoundaryExperimentInfo:(id)a0;
- (id)_getPreferredLanguages;
- (id)_getZKWExperimentInfo:(id)a0;
- (id)_initWithExperimentResolver:(id)a0;

@end

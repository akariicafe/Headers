@class NSString, _PASBundleIdResolver, PSGExperimentResolver;
@protocol PSGInternalServerProtocol;

@interface PSGInternalRequestHandler : NSObject <PSGInternalServerProtocol> {
    id<PSGInternalServerProtocol> _clientProxy;
    PSGExperimentResolver *_experimentResolver;
}

@property (copy, nonatomic) NSString *clientProcessName;
@property (retain, nonatomic) _PASBundleIdResolver *bundleIdResolver;

- (void)sysdiagnoseInformationWithCompletion:(id /* block */)a0;
- (void)setRemoteObjectProxy:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_initWithExperimentResolver:(id)a0;
- (id)_getZKWExperimentInfo:(id)a0;
- (id)_getWordBoundaryExperimentInfo:(id)a0;
- (id)_getPreferredLanguages;

@end

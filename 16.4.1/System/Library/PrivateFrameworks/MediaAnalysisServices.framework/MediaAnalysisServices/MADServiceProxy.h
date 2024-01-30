@class MADService;

@interface MADServiceProxy : NSObject <VCPMediaAnalysisClientProtocol> {
    MADService *_service;
}

- (id)initWithService:(id)a0;
- (void)reportProgress:(double)a0 forRequest:(int)a1;
- (void).cxx_destruct;

@end

@class NSURL, NSString;
@protocol NRBloomFilterInfoService;

@interface NRWebURLResolutionOperation : FCOperation <NRURLResolutionOperation>

@property (readonly, copy, nonatomic) NSURL *webURL;
@property (readonly, nonatomic) id<NRBloomFilterInfoService> bloomFilterInfoService;
@property (copy, nonatomic) NSURL *resultNewsURL;
@property (copy, nonatomic) id /* block */ resolutionCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performOperation;
- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithWebURL:(id)a0 bloomFilterInfoService:(id)a1;

@end

@class NSURL, NSString;

@interface NRNewsURLResolutionOperation : FCOperation <NRURLResolutionOperation>

@property (readonly, copy, nonatomic) NSURL *newsURL;
@property (copy, nonatomic) NSURL *resultWebURL;
@property (copy, nonatomic) id /* block */ resolutionCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)performOperation;
- (id)init;
- (void).cxx_destruct;
- (id)initWithNewsURL:(id)a0;

@end

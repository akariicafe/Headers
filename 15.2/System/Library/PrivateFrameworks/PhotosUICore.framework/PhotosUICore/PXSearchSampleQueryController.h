@class NSString;

@interface PXSearchSampleQueryController : NSObject <PXSearchQueryControllerProtocol>

@property (readonly, copy, nonatomic) id /* block */ sampleResultsHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)performSearch:(id)a0;
- (id)initWithResultsHandler:(id /* block */)a0;

@end

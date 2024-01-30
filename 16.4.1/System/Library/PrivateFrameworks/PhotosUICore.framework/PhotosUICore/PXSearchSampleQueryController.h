@class NSString;

@interface PXSearchSampleQueryController : NSObject <PXSearchQueryControllerProtocol>

@property (readonly, copy, nonatomic) id /* block */ sampleResultsHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithResultsHandler:(id /* block */)a0;
- (void)performSearch:(id)a0;

@end

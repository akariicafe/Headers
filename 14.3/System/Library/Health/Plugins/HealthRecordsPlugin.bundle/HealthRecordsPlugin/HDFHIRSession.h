@class HDFHIRSpecification, NSURLSession;

@interface HDFHIRSession : NSObject

@property (retain, nonatomic) NSURLSession *URLSession;
@property (readonly, copy, nonatomic) HDFHIRSpecification *specification;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSpecification:(id)a0;
- (id)_createDefaultURLSessionConfiguration;
- (void)_instantiateURLSessionWithConfiguration:(id)a0;
- (void)_unitTesting_recreateURLSessionWithConfigurationBlock:(id /* block */)a0;

@end

@class NSString, TransparencyApplication;

@interface KTStatus : NSObject

@property (retain) TransparencyApplication *application;
@property (readonly) NSString *applicationIdentifier;

- (id)initWithApplication:(id)a0;
- (void).cxx_destruct;
- (void)getStatus:(id /* block */)a0;
- (void)errorForFailedEvent:(id)a0 completionBlock:(id /* block */)a1;
- (void)errorsForFailedEvents:(id)a0 completionBlock:(id /* block */)a1;
- (void)getCurrentStatus:(id /* block */)a0;
- (void)ignoreFailedEvent:(id)a0 completionBlock:(id /* block */)a1;
- (void)ignoreFailedEvents:(id)a0 completionBlock:(id /* block */)a1;

@end

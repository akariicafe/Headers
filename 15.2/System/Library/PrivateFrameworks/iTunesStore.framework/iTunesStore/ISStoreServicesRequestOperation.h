@class SSRequest;

@interface ISStoreServicesRequestOperation : ISOperation {
    SSRequest *_request;
}

@property (readonly) SSRequest *request;

- (id)initWithRequest:(id)a0;
- (void)run;
- (void)dealloc;
- (void)cancel;

@end

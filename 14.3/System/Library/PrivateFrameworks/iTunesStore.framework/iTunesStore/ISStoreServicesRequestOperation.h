@class SSRequest;

@interface ISStoreServicesRequestOperation : ISOperation {
    SSRequest *_request;
}

@property (readonly) SSRequest *request;

- (void)cancel;
- (id)initWithRequest:(id)a0;
- (void)run;
- (void)dealloc;

@end

@class SSRequest;

@interface ISStoreServicesRequestOperation : ISOperation {
    SSRequest *_request;
}

@property (readonly) SSRequest *request;

- (void)run;
- (id)initWithRequest:(id)a0;
- (void)cancel;
- (void)dealloc;

@end

@class ISOpenURLRequest;

@interface ISOpenURLOperation : ISOperation {
    ISOpenURLRequest *_request;
}

@property (readonly) ISOpenURLRequest *openURLRequest;

- (BOOL)_openURL:(id)a0;
- (void)run;
- (void).cxx_destruct;
- (id)init;
- (id)initWithOpenURLRequest:(id)a0;
- (id)_newSortedTargetsArray;

@end

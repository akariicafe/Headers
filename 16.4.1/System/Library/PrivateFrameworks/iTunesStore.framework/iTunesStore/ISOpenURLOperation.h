@class ISOpenURLRequest;

@interface ISOpenURLOperation : ISOperation {
    ISOpenURLRequest *_request;
}

@property (readonly) ISOpenURLRequest *openURLRequest;

- (void)run;
- (BOOL)_openURL:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithOpenURLRequest:(id)a0;
- (id)_newSortedTargetsArray;

@end

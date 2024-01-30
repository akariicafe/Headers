@class ASDRepairOptions;

@interface ASDRepairApplicationRequest : NSObject {
    ASDRepairOptions *_options;
}

- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (void)sendRequestWithCompletionBlock:(id /* block */)a0;

@end

@class MPCPlayerCommandRequest;

@interface MPCMediaRemoteCommandOperation : MPAsyncOperation

@property (readonly, nonatomic) MPCPlayerCommandRequest *request;
@property (readonly, nonatomic) unsigned long long options;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithCommandRequest:(id)a0 options:(unsigned long long)a1;

@end

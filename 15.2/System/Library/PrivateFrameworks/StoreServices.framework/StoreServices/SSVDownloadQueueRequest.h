@interface SSVDownloadQueueRequest : SSRequest

@property (readonly, nonatomic) long long queueType;

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (id)initWithQueueType:(long long)a0;
- (void)startWithResponseBlock:(id /* block */)a0;

@end

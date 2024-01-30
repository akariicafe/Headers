@interface SSVDownloadQueueRequest : SSRequest

@property (readonly, nonatomic) long long queueType;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (void)startWithResponseBlock:(id /* block */)a0;
- (id)initWithQueueType:(long long)a0;

@end

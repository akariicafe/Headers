@interface MFCountingDataConsumer : MFNullDataConsumer

@property (readonly, nonatomic) unsigned long long count;

- (long long)appendData:(id)a0;

@end

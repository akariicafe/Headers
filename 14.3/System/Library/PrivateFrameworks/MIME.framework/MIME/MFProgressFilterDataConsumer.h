@interface MFProgressFilterDataConsumer : MFBaseFilterDataConsumer {
    unsigned long long _currentBytes;
}

@property (copy, nonatomic) id /* block */ progressBlock;
@property (readonly) unsigned long long expectedSize;

- (void).cxx_destruct;
- (id)initWithConsumers:(id)a0 expectedSize:(unsigned long long)a1;
- (id)initWithConsumer:(id)a0 expectedSize:(unsigned long long)a1;
- (long long)appendData:(id)a0;

@end

@interface DESizeWriter : NSObject <DEWriter>

@property (nonatomic) unsigned long long size;

- (void)writeData:(id)a0;
- (void)close;
- (id)init;

@end

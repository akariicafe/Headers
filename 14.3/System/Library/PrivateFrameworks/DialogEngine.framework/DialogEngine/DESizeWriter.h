@interface DESizeWriter : NSObject <DEWriter>

@property (nonatomic) unsigned long long size;

- (id)init;
- (void)close;
- (void)writeData:(id)a0;

@end

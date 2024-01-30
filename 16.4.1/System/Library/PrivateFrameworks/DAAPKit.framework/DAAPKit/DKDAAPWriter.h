@class NSError, NSMutableArray, NSOutputStream;

@interface DKDAAPWriter : NSObject

@property (readonly, nonatomic) NSOutputStream *outputStream;
@property (readonly, nonatomic) NSMutableArray *containerStack;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSError *error;

- (id)initWithStream:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (void)endContainerWithCode:(unsigned int)a0;
- (void)startContainerWithCode:(unsigned int)a0;
- (void)writeData:(id)a0 withCode:(unsigned int)a1;
- (void)writeSInt16:(short)a0 withCode:(unsigned int)a1;
- (void)writeSInt32:(int)a0 withCode:(unsigned int)a1;
- (void)writeSInt64:(long long)a0 withCode:(unsigned int)a1;
- (void)writeSInt8:(char)a0 withCode:(unsigned int)a1;
- (void)writeString:(id)a0 withCode:(unsigned int)a1;
- (void)writeUInt16:(unsigned short)a0 withCode:(unsigned int)a1;
- (void)writeUInt32:(unsigned int)a0 withCode:(unsigned int)a1;
- (void)writeUInt64:(unsigned long long)a0 withCode:(unsigned int)a1;
- (void)writeUInt8:(unsigned char)a0 withCode:(unsigned int)a1;
- (void)_performWriteWithBuffer:(id /* block */)a0;
- (void)_writeDataToOutputStream:(id)a0;
- (void)writeBytes:(char *)a0 ofLength:(unsigned int)a1 withCode:(unsigned int)a2;
- (void)writeCString:(const char *)a0 withCode:(unsigned int)a1;
- (void)writeContainerData:(id)a0;

@end

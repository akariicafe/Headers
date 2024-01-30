@class NSString;
@protocol PTPDataPacketDataSource;

@interface PTPDataPacket : NSObject {
    unsigned short _operationCode;
    unsigned int _transactionID;
    id _data;
    NSString *_filepath;
    int _fd;
    id<PTPDataPacketDataSource> _dataSource;
    long long _bufferSize;
    long long _offsetInBuffer;
    struct _PTPRange { unsigned long long location; unsigned long long length; } _range;
    long long _bytesTransferred;
}

- (void)setData:(id)a0;
- (unsigned int)transactionID;
- (int)setRange:(struct _PTPRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _PTPRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setBytesTransferred:(long long)a0;
- (id)data;
- (void)dealloc;
- (long long)bufferSize;
- (void)setTransactionID:(unsigned int)a0;
- (id)description;
- (long long)bytesTransferred;
- (id)filepath;
- (id)contentForTCP;
- (id)contentForUSB;
- (id)contentForUSBUsingBuffer:(void *)a0 capacity:(unsigned int)a1;
- (long long)copyDataToWrappedBytes:(id)a0 forTransport:(unsigned short)a1 fromOffset:(unsigned long long)a2;
- (long long)copyFromBuffer:(void *)a0 numBytes:(long long)a1;
- (long long)copyHeaderToWrappedBytes:(id)a0 forTransport:(unsigned short)a1;
- (long long)copyToBuffer:(void *)a0 numBytes:(long long)a1;
- (long long)copyToWrappedBytes:(id)a0 forTransport:(unsigned short)a1;
- (id)initWithOperationCode:(unsigned short)a0 transactionID:(unsigned int)a1 andData:(id)a2;
- (id)initWithOperationCode:(unsigned short)a0 transactionID:(unsigned int)a1 andDataSource:(id)a2;
- (id)initWithOperationCode:(unsigned short)a0 transactionID:(unsigned int)a1 andFilepath:(id)a2;
- (id)initWithTCPBuffer:(void *)a0;
- (id)initWithUSBBuffer:(void *)a0;
- (long long)offsetInBuffer;
- (unsigned short)operationCode;
- (void)setOperationCode:(unsigned short)a0;

@end

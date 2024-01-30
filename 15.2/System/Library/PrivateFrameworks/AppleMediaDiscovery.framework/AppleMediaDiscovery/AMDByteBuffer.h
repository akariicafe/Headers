@class NSInputStream;

@interface AMDByteBuffer : NSObject

@property (retain, nonatomic) NSInputStream *inputStream;
@property unsigned long long readPosition;
@property unsigned long long fileSize;

- (void).cxx_destruct;
- (short)getShortWithError:(id *)a0;
- (long long)getLongWithError:(id *)a0;
- (id)initWithInputStream:(id)a0 withFileSize:(unsigned long long)a1;
- (BOOL)hasRemaining;
- (unsigned char)getByteWithError:(id *)a0;
- (int)getIntWithError:(id *)a0;
- (id)getDataOfLength:(int)a0 error:(id *)a1;
- (void)copyDataOfLength:(unsigned long long)a0 toFile:(id)a1 isCompressed:(BOOL)a2 error:(id *)a3;

@end

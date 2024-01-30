@class NSData;

@interface WFSSHKeyDecoder : NSObject

@property (readonly, nonatomic) NSData *data;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned long long length;

- (void)advanceBy:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (const char *)currentPointer;
- (unsigned int)decodeInteger;
- (id)decodeStringWithLength:(unsigned long long)a0;
- (id)decodeStringWithPrecedingLength;
- (id)decodeDataWithLength:(unsigned long long)a0;
- (id)decodeDataWithPrecedingLength;

@end

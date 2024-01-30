@class NSData;

@interface WFSSHKeyDecoder : NSObject

@property (readonly, nonatomic) NSData *data;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned long long length;

- (id)initWithData:(id)a0;
- (void)advanceBy:(unsigned long long)a0;
- (void).cxx_destruct;
- (const char *)currentPointer;
- (unsigned int)decodeInteger;
- (id)decodeStringWithLength:(unsigned long long)a0;
- (id)decodeStringWithPrecedingLength;
- (id)decodeDataWithLength:(unsigned long long)a0;
- (id)decodeDataWithPrecedingLength;

@end

@class NSData;

@interface WFSSHKeyDecoder : NSObject

@property (readonly, nonatomic) NSData *data;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned long long length;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (void)advanceBy:(unsigned long long)a0;
- (id)decodeStringWithPrecedingLength;
- (const char *)currentPointer;
- (id)decodeDataWithLength:(unsigned long long)a0;
- (id)decodeDataWithPrecedingLength;
- (unsigned int)decodeInteger;
- (id)decodeStringWithLength:(unsigned long long)a0;

@end

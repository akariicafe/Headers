@class NSData;

@interface HAPTLVParser : HMFObject {
    NSData *_tlvData;
}

+ (id)parserWithData:(id)a0;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)parseResponseForArray:(unsigned long long)a0;
- (id)parseResponseForData:(unsigned long long)a0;
- (id)parseResponseForNumber:(unsigned long long)a0;
- (id)parseResponseForString:(unsigned long long)a0;
- (id)parseResponseForUInt16:(unsigned long long)a0;
- (id)parseResponseForUInt8:(unsigned long long)a0;
- (id)parseResponseForUUID:(unsigned long long)a0;

@end

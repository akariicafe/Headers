@class NSMutableData, NSData;

@interface WFSSHKeyEncoder : NSObject

@property (readonly, nonatomic) NSMutableData *data;
@property (readonly, nonatomic) unsigned long long encodedLength;
@property (readonly, nonatomic) NSData *encodedData;

- (void).cxx_destruct;
- (id)init;
- (void)encodeString:(id)a0;
- (void)encodeData:(id)a0;
- (void)encodeChar:(char)a0;
- (void)encodeInteger:(unsigned int)a0;
- (void)encodeStringWithPreceedingLength:(id)a0;
- (void)encodeDataWithPreceedingLength:(id)a0;

@end

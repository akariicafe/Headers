@interface CBORValue : NSObject

@property (readonly, nonatomic) int fieldType;
@property (readonly, nonatomic) unsigned char fieldValue;

- (void)write:(id)a0;
- (void)encodeStartItems:(unsigned long long)a0 output:(id)a1;
- (unsigned long long)getNumUintBytes:(unsigned long long)a0;
- (void)setAdditionalInformation:(unsigned char)a0 item2:(unsigned char)a1 output:(id)a2;
- (void)setUint:(unsigned char)a0 item2:(unsigned long long)a1 output:(id)a2;

@end

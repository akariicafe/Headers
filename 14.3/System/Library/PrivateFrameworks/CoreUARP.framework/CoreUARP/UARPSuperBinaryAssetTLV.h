@class NSURL, NSData, NSString;

@interface UARPSuperBinaryAssetTLV : NSObject {
    unsigned int _type;
    NSURL *_url;
    NSData *_data;
    NSString *_string;
    unsigned char _val8;
    unsigned short _val16;
    unsigned int _val32;
    unsigned long long _val64;
    struct UARPVersion { unsigned int major; unsigned int minor; unsigned int release; unsigned int build; } _version;
    int _valueType;
}

+ (id)decomposeTLVs:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(unsigned long long)a0 stringValue:(id)a1;
- (id)initWithType:(unsigned long long)a0 version:(struct UARPVersion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a1;
- (id)initWithType:(unsigned long long)a0 urlValue:(id)a1;
- (id)initWithType:(unsigned long long)a0 unsignedInt32:(unsigned int)a1;
- (id)initWithType:(unsigned long long)a0 dataValue:(id)a1;
- (id)generateTLV:(id *)a0;
- (id)initWithType:(unsigned long long)a0 unsignedInt8:(unsigned char)a1;
- (id)initWithType:(unsigned long long)a0 unsignedInt16:(unsigned short)a1;
- (id)initWithType:(unsigned long long)a0 unsignedInt64:(unsigned long long)a1;
- (id)initWithType:(unsigned long long)a0 tagValue:(id)a1;

@end

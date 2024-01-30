@class NSData;

@interface NFCommandAPDU : NSObject {
    unsigned char _class;
    unsigned char _instruction;
    unsigned char _p1;
    unsigned char _p2;
    struct _NSRange { unsigned long long location; unsigned long long length; } _payloadRange;
    unsigned int _lengthExpected;
    NSData *_data;
}

@property (readonly, nonatomic) unsigned char clss;
@property (readonly, nonatomic) unsigned char instruction;
@property (readonly, nonatomic) unsigned char p1;
@property (readonly, nonatomic) unsigned char p2;
@property (readonly, nonatomic) unsigned int lengthExpected;
@property (readonly, nonatomic) unsigned int payloadLength;
@property (readonly, nonatomic) const char *payloadBytes;
@property (readonly, nonatomic) NSData *payload;

+ (id)appendExpectedLength:(unsigned short)a0 usingExtendedLength:(BOOL)a1 toAPDU:(id)a2;
+ (id)buildAPDUHeaderWithClass:(unsigned char)a0 instruction:(unsigned char)a1 p1:(unsigned char)a2 p2:(unsigned char)a3 len:(unsigned int)a4 useExtendedLength:(BOOL)a5;

- (id)initWithData:(id)a0;
- (id)initWithBytes:(const char *)a0 length:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)isSelectCommand;
- (id)initWithData:(id)a0 uniformLengthCheck:(BOOL)a1;
- (BOOL)isGetMoreVasDataCommand;
- (BOOL)isGetVasDataCommand;
- (BOOL)isSelectByDFNameCommand;
- (BOOL)isSendCertificateCommand;

@end

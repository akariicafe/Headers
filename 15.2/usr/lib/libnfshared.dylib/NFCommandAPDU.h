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

- (id)initWithData:(id)a0;
- (id)initWithBytes:(const char *)a0 length:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 uniformLengthCheck:(BOOL)a1;
- (BOOL)isSelectCommand;
- (BOOL)isSendCertificateCommand;
- (BOOL)isGetVasDataCommand;
- (BOOL)isGetMoreVasDataCommand;

@end

@class NSData, NSString;

@interface IDSStunMessage : NSObject {
    unsigned short _len;
    struct IDSStunAttribute { unsigned short type; unsigned short len; unsigned short valueType; BOOL encrypted; union { struct sockaddr_storage { unsigned char ss_len; unsigned char ss_family; char __ss_pad1[6]; long long __ss_align; char __ss_pad2[112]; } ss; unsigned char u8; unsigned short u16; unsigned int u32; unsigned long long u64; struct StunBinaryData { int len; unsigned char data[1472]; } binaryData; struct StunErrorCode { int errorClass; int errorNumber; unsigned char errorReason[128]; int len; } errorCode; struct StunUnknownAttribute { int count; unsigned short unknowAttributes[20]; } unknownAttribute; } value; } _attributes[20];
    int _numAttribute;
    BOOL _requiresAES128CTR;
    struct _CCCryptor { } *_cryptorRef;
}

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSData *transactionID;
@property (readonly, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSData *key;
@property (nonatomic) double startTime;

- (BOOL)hasAttribute:(long long)a0;
- (id)initWithType:(long long)a0;
- (void)setAttributes:(id)a0;
- (BOOL)addAttribute:(struct IDSStunAttribute { unsigned short x0; unsigned short x1; unsigned short x2; BOOL x3; union { struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x0; unsigned char x1; unsigned short x2; unsigned int x3; unsigned long long x4; struct StunBinaryData { int x0; unsigned char x1[1472]; } x5; struct StunErrorCode { int x0; int x1; unsigned char x2[128]; int x3; } x6; struct StunUnknownAttribute { int x0; unsigned short x1[20]; } x7; } x4; } *)a0;
- (void)dealloc;
- (void)setTransactionID:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)decryptAES128CTRStunAttributes:(id)a0;
- (void)_addBinaryDataAttribute:(long long)a0 value:(id)a1;
- (void)_addUInt16Attribute:(long long)a0 value:(unsigned short)a1;
- (void)_addUInt32Attribute:(long long)a0 value:(unsigned int)a1;
- (void)_addUInt64Attribute:(long long)a0 value:(unsigned long long)a1;
- (void)_addUInt8Attribute:(long long)a0 value:(unsigned char)a1;
- (void)_addUUIDAttribute:(long long)a0 value:(id)a1;
- (void)_addXORAddressAttribute:(long long)a0 value:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a1;
- (BOOL)dataIndicationToBuffer:(char *)a0 outputLength:(int *)a1 data:(char *)a2 dataLen:(int)a3 keyData:(id)a4 remainingLength:(unsigned long long)a5;
- (BOOL)getAttribute:(long long)a0 attribute:(struct IDSStunAttribute { unsigned short x0; unsigned short x1; unsigned short x2; BOOL x3; union { struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x0; unsigned char x1; unsigned short x2; unsigned int x3; unsigned long long x4; struct StunBinaryData { int x0; unsigned char x1[1472]; } x5; struct StunErrorCode { int x0; int x1; unsigned char x2[128]; int x3; } x6; struct StunUnknownAttribute { int x0; unsigned short x1[20]; } x7; } x4; } *)a1;
- (BOOL)initAES128CTR:(id)a0;
- (BOOL)read:(char *)a0 inputLength:(unsigned long long)a1;
- (BOOL)read:(char *)a0 inputLength:(unsigned long long)a1 internal:(BOOL)a2;
- (void)setTransactionID:(id)a0 attributes:(id)a1;
- (BOOL)stunRequestToBuffer:(char *)a0 outputLength:(int *)a1 transactionID:(char *)a2 reqCount:(int)a3 userName:(char *)a4 usernameLen:(int)a5 sendTime:(unsigned short)a6 keyData:(id)a7 remainingLength:(unsigned long long)a8;
- (BOOL)stunResponseToBuffer:(char *)a0 outputLength:(int *)a1 transactionID:(id)a2 reqCount:(int)a3 echoTime:(unsigned short)a4 delay:(unsigned short)a5 keyData:(id)a6 remainingLength:(unsigned long long)a7;
- (BOOL)verifyMessageIntegrityWithKey:(id)a0 inputBuffer:(char *)a1 inputLength:(int)a2;
- (BOOL)write:(char *)a0 outputLength:(int *)a1 remainingLength:(unsigned long long)a2;
- (BOOL)write:(char *)a0 outputLength:(int *)a1 remainingLength:(unsigned long long)a2 internal:(BOOL)a3;

@end

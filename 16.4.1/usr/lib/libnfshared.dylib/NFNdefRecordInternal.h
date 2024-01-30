@class NSData, NSString;

@interface NFNdefRecordInternal : NSObject <NFNdefRecord, NSSecureCoding> {
    unsigned char _firstOctet;
    NSData *_identifier;
    NSData *_type;
    NSData *_payload;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned char header;
@property (nonatomic) BOOL messageBegin;
@property (nonatomic) BOOL messageEnd;
@property (nonatomic) BOOL shortRecord;
@property (nonatomic) BOOL chunked;
@property (nonatomic) unsigned char typeNameFormat;
@property (retain, nonatomic) NSData *type;
@property (retain, nonatomic) NSData *payload;
@property (retain, nonatomic) NSData *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decodeFromRecord:(id)a0;
+ (id)dataFromRecord:(id)a0;
+ (id)_decodeURIRecord:(id)a0;
+ (id)recordsFromBytes:(const void *)a0 length:(unsigned int)a1;
+ (BOOL)parseRecordUsingScanner:(struct _NFDataScanner { struct _NFData *x0; unsigned long long x1; void *x2; } *)a0 header:(char *)a1 type:(id *)a2 identifier:(id *)a3 payload:(id *)a4;
+ (id)_decodeTextRecordText:(id)a0;
+ (id)_decodeTextRecordLanguage:(id)a0;
+ (id)recordsWithTNF:(unsigned char)a0 type:(id)a1 identifier:(id)a2 payload:(id)a3 chunkSize:(unsigned long long)a4 outError:(unsigned int *)a5;
+ (id)_decodeTextRecord:(id)a0;

- (id)asData;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)decode;
- (void).cxx_destruct;
- (BOOL)_idLengthPresent;
- (void)_setIdLengthPresent:(BOOL)a0;
- (id)initWithNDEFRecord:(id)a0;
- (BOOL)isURIRecord;
- (id)initWithHeader:(unsigned char)a0 type:(id)a1 identifier:(id)a2 payload:(id)a3;

@end

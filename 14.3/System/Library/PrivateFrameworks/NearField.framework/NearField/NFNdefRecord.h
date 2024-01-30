@class NSData, NSString;

@interface NFNdefRecord : NSObject <NSSecureCoding, NFNdefRecord> {
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

+ (id)recordWithURI:(id)a0;
+ (id)emptyRecord;
+ (id)recordsFromBytes:(const void *)a0 length:(unsigned int)a1;
+ (id)recordWithText:(id)a0 lang:(id)a1;
+ (id)recordWithTelephone:(id)a0;

- (id)initWithBytes:(const void *)a0 length:(unsigned int)a1;
- (id)init;
- (void).cxx_destruct;
- (id)asData;
- (id)decode;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithNDEFRecord:(id)a0;
- (void)_setIdLengthPresent:(BOOL)a0;
- (BOOL)isURIRecord;
- (BOOL)_idLengthPresent;

@end

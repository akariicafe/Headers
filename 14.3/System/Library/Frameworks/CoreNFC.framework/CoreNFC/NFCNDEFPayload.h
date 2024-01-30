@class NSData;

@interface NFCNDEFPayload : NSObject <NSSecureCoding> {
    unsigned long long _chunkSize;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned char typeNameFormat;
@property (copy, nonatomic) NSData *type;
@property (copy, nonatomic) NSData *identifier;
@property (copy, nonatomic) NSData *payload;

+ (id)wellKnownTypeURIPayloadWithString:(id)a0;
+ (id)wellKnownTypeURIPayloadWithURL:(id)a0;
+ (id)wellKnowTypeTextPayloadWithString:(id)a0 locale:(id)a1;
+ (id)wellKnownTypeTextPayloadWithString:(id)a0 locale:(id)a1;

- (void).cxx_destruct;
- (id)asData;
- (id)initWithCoder:(id)a0;
- (id)description;
- (unsigned long long)chunkSize;
- (void)setChunkSize:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFormatType:(unsigned char)a0 type:(id)a1 identifier:(id)a2 payload:(id)a3 chunkSize:(unsigned long long)a4;
- (id)wellKnownTypeURIPayload;
- (id)initWithFormat:(unsigned char)a0 type:(id)a1 identifier:(id)a2 payload:(id)a3;
- (id)initWithFormat:(unsigned char)a0 type:(id)a1 identifier:(id)a2 payload:(id)a3 chunkSize:(unsigned long long)a4;
- (id)resolveURIString:(id)a0;
- (id)wellKnownTypeTextPayloadWithLocale:(id *)a0;

@end

@class NSString;

@interface MFMimeCharset : NSObject <NSSecureCoding, ECMIMECharset> {
    unsigned int _encoding;
    NSString *_primaryLanguage;
    NSString *_charsetName;
    unsigned char _coversLargeUnicodeSubset : 1;
    unsigned char _useBase64InHeaders : 1;
    unsigned char _canBeUsedForOutgoingMessages : 1;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL useBase64InHeaders;
@property (readonly, nonatomic) unsigned int cfStringEncoding;
@property (readonly) unsigned long long encoding;
@property (readonly, copy, nonatomic) NSString *charsetName;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL canBeUsedForOutgoingMessages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)preferredMimeCharset;
+ (id)charsetForEncoding:(unsigned int)a0;
+ (id)allMimeCharsets:(BOOL)a0;
+ (id)allMimeCharsets;

- (void)encodeWithCoder:(id)a0;
- (id)initWithEncoding:(unsigned int)a0;
- (void).cxx_destruct;
- (id)primaryLanguage;
- (void)_setPrimaryLanguage:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)coversLargeUnicodeSubset;

@end

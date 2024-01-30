@class NSData, NSString;

@interface ICEncryptionMetadata : NSObject

@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned long long cipherVersion;
@property (retain, nonatomic) NSString *accountKeyIdentifier;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithCipherVersion:(unsigned long long)a0 accountKeyIdentifier:(id)a1;

@end

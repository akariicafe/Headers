@class NSData, NSString, HAPNFCAccessKeyTypeWrapper;

@interface HAPNFCAccessReaderKeyRequest : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPNFCAccessKeyTypeWrapper *type;
@property (retain, nonatomic) NSData *key;
@property (retain, nonatomic) NSData *readerIdentifier;
@property (retain, nonatomic) NSData *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (id)serializeWithError:(id *)a0;
- (id)initWithType:(id)a0 key:(id)a1 readerIdentifier:(id)a2 identifier:(id)a3;

@end

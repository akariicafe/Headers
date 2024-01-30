@class NSString, NSData, NSMutableArray;

@interface NSPPrivacyProxyTokenInfo : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *proxyURL;
@property (retain, nonatomic) NSData *tokenKeyID;
@property (retain, nonatomic) NSMutableArray *unactivatedTokenLists;
@property (readonly, nonatomic) BOOL hasVendor;
@property (retain, nonatomic) NSString *vendor;

+ (Class)unactivatedTokenListType;

- (id)unactivatedTokenListAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void)clearUnactivatedTokenLists;
- (unsigned long long)hash;
- (void)addUnactivatedTokenList:(id)a0;
- (unsigned long long)unactivatedTokenListsCount;
- (id)dictionaryRepresentation;

@end

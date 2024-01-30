@class NSMutableArray;

@interface NSPPrivacyProxyTokenActivationResponse : PBCodable <NSCopying> {
    struct { unsigned char tokenExpiryTimestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTokenExpiryTimestamp;
@property (nonatomic) unsigned long long tokenExpiryTimestamp;
@property (retain, nonatomic) NSMutableArray *activatedTokenLists;

+ (Class)activatedTokenListType;

- (void)clearActivatedTokenLists;
- (unsigned long long)activatedTokenListsCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)activatedTokenListAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void)addActivatedTokenList:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end

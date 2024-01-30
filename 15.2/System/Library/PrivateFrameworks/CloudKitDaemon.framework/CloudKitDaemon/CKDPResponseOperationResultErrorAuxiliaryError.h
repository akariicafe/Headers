@class NSString, NSMutableArray;

@interface CKDPResponseOperationResultErrorAuxiliaryError : PBCodable <NSCopying> {
    struct { unsigned char code : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) BOOL hasCode;
@property (nonatomic) int code;
@property (retain, nonatomic) NSMutableArray *userInfos;

+ (Class)userInfoType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addUserInfo:(id)a0;
- (id)userInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)userInfosCount;
- (void)clearUserInfos;

@end

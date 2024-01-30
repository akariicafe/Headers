@class NSString, NSMutableArray;

@interface CKCDPError : PBCodable <NSCopying> {
    struct { unsigned char auxiliaryCode : 1; unsigned char code : 1; unsigned char targetPartition : 1; } _has;
}

@property (nonatomic) BOOL hasCode;
@property (nonatomic) int code;
@property (readonly, nonatomic) BOOL hasMessage;
@property (retain, nonatomic) NSString *message;
@property (readonly, nonatomic) BOOL hasAuxiliaryDomain;
@property (retain, nonatomic) NSString *auxiliaryDomain;
@property (nonatomic) BOOL hasAuxiliaryCode;
@property (nonatomic) int auxiliaryCode;
@property (retain, nonatomic) NSMutableArray *auxiliaryUserInfos;
@property (nonatomic) BOOL hasTargetPartition;
@property (nonatomic) int targetPartition;

+ (Class)auxiliaryUserInfoType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsCode:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)codeAsString:(int)a0;
- (void)addAuxiliaryUserInfo:(id)a0;
- (id)auxiliaryUserInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)auxiliaryUserInfosCount;
- (void)clearAuxiliaryUserInfos;

@end

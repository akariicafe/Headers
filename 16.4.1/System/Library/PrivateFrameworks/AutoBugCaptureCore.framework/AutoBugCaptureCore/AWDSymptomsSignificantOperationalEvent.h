@class NSString;

@interface AWDSymptomsSignificantOperationalEvent : PBCodable <NSCopying> {
    struct { unsigned char errorCode : 1; unsigned char timestamp : 1; unsigned char error : 1; unsigned char name : 1; unsigned char status : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasName;
@property (nonatomic) int name;
@property (readonly, nonatomic) BOOL hasAlternateName;
@property (retain, nonatomic) NSString *alternateName;
@property (nonatomic) BOOL hasError;
@property (nonatomic) int error;
@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) long long errorCode;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsStatus:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)statusAsString:(int)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsName:(id)a0;
- (id)nameAsString:(int)a0;
- (int)StringAsError:(id)a0;
- (id)errorAsString:(int)a0;

@end

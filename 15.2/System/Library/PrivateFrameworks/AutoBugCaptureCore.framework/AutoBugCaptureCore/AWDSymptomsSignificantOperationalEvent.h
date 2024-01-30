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

- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)nameAsString:(int)a0;
- (int)StringAsName:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)errorAsString:(int)a0;
- (int)StringAsError:(id)a0;

@end

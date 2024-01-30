@class NSString, HDCodableError;

@interface HDCodableStartWorkoutAppResponse : PBCodable <NSCopying> {
    struct { unsigned char success : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRequestIdentifier;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL success;
@property (readonly, nonatomic) BOOL hasLaunchError;
@property (retain, nonatomic) HDCodableError *launchError;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end

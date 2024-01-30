@interface TVRMSNavigationCommandMessage : PBCodable <NSCopying> {
    struct { unsigned char navigationCommand : 1; unsigned char sessionIdentifier : 1; } _has;
}

@property (nonatomic) BOOL hasNavigationCommand;
@property (nonatomic) int navigationCommand;
@property (nonatomic) BOOL hasSessionIdentifier;
@property (nonatomic) int sessionIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end

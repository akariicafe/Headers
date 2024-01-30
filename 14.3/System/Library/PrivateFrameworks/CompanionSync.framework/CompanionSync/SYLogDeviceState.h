@class NSString;

@interface SYLogDeviceState : PBCodable <NSCopying> {
    struct { unsigned char state : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasDeviceClass;
@property (retain, nonatomic) NSString *deviceClass;
@property (readonly, nonatomic) BOOL hasBuildVersion;
@property (retain, nonatomic) NSString *buildVersion;
@property (nonatomic) BOOL hasState;
@property (nonatomic) unsigned int state;

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

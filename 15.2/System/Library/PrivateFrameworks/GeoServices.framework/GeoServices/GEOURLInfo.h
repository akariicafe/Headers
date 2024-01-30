@class NSURL, NSString, PBUnknownFields;

@interface GEOURLInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_url;
    unsigned int _alternativeMultipathTCPPort;
    BOOL _supportsMultipathTCP;
    BOOL _useAuthProxy;
    struct { unsigned char has_alternativeMultipathTCPPort : 1; unsigned char has_supportsMultipathTCP : 1; unsigned char has_useAuthProxy : 1; } _flags;
}

@property (readonly, nonatomic) NSURL *nsURL;
@property (readonly, nonatomic) BOOL hasUrl;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) BOOL hasUseAuthProxy;
@property (nonatomic) BOOL useAuthProxy;
@property (nonatomic) BOOL hasSupportsMultipathTCP;
@property (nonatomic) BOOL supportsMultipathTCP;
@property (nonatomic) BOOL hasAlternativeMultipathTCPPort;
@property (nonatomic) unsigned int alternativeMultipathTCPPort;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end

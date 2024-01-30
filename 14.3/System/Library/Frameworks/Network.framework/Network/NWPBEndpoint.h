@class NWPBHostEndpoint, NWPBServiceEndpoint, NWPBInterface, NSData, NWPBAddressEndpoint;

@interface NWPBEndpoint : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAddress;
@property (retain, nonatomic) NWPBAddressEndpoint *address;
@property (readonly, nonatomic) BOOL hasHost;
@property (retain, nonatomic) NWPBHostEndpoint *host;
@property (readonly, nonatomic) BOOL hasService;
@property (retain, nonatomic) NWPBServiceEndpoint *service;
@property (readonly, nonatomic) BOOL hasInterface;
@property (retain, nonatomic) NWPBInterface *interface;
@property (readonly, nonatomic) BOOL hasTxtRecord;
@property (retain, nonatomic) NSData *txtRecord;

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

@class NSData, NSString, NTPBDate;

@interface NTPBAppConfigurationResource : PBCodable <NSCopying> {
    struct { unsigned char maxAge : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasGzippedConfigurationData;
@property (retain, nonatomic) NSData *gzippedConfigurationData;
@property (readonly, nonatomic) BOOL hasSourceURL;
@property (retain, nonatomic) NSString *sourceURL;
@property (readonly, nonatomic) BOOL hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (readonly, nonatomic) BOOL hasLastFetchedDate;
@property (retain, nonatomic) NTPBDate *lastFetchedDate;
@property (readonly, nonatomic) BOOL hasLastModifiedDate;
@property (retain, nonatomic) NTPBDate *lastModifiedDate;
@property (readonly, nonatomic) BOOL hasLastModifiedString;
@property (retain, nonatomic) NSString *lastModifiedString;
@property (nonatomic) BOOL hasMaxAge;
@property (nonatomic) long long maxAge;
@property (readonly, nonatomic) BOOL hasResourceID;
@property (retain, nonatomic) NSString *resourceID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end

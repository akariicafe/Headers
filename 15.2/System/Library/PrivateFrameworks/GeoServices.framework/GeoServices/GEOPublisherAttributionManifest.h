@class NSMutableDictionary;

@interface GEOPublisherAttributionManifest : PBCodable <NSCopying> {
    NSMutableDictionary *_publisherAttributionSources;
}

@property (retain, nonatomic) NSMutableDictionary *publisherAttributionSources;

+ (Class)publisherAttributionSourcesType;
+ (BOOL)isValid:(id)a0;

- (void)enumeratePublisherAttributionSourcesUsingBlock:(id /* block */)a0;
- (void)readAll:(BOOL)a0;
- (void)clearPublisherAttributionSources;
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
- (id)publisherAttributionSourcesForKey:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)setPublisherAttributionSourcesValue:(id)a0 forKey:(id)a1;
- (unsigned long long)publisherAttributionSourcesCount;

@end

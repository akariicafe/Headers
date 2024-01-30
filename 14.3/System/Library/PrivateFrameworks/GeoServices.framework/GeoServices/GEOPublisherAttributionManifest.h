@class NSMutableDictionary;

@interface GEOPublisherAttributionManifest : PBCodable <NSCopying> {
    NSMutableDictionary *_publisherAttributionSources;
}

@property (retain, nonatomic) NSMutableDictionary *publisherAttributionSources;

+ (Class)publisherAttributionSourcesType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)setPublisherAttributionSourcesValue:(id)a0 forKey:(id)a1;
- (unsigned long long)publisherAttributionSourcesCount;
- (void)clearPublisherAttributionSources;
- (id)publisherAttributionSourcesForKey:(id)a0;
- (void)enumeratePublisherAttributionSourcesUsingBlock:(id /* block */)a0;

@end

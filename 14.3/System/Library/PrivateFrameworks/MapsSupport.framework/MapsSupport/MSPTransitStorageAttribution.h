@class NSArray, NSString, NSMutableArray, PBUnknownFields;

@interface MSPTransitStorageAttribution : PBCodable <GEOTransitAttribution, NSCopying> {
    PBUnknownFields *_unknownFields;
}

@property (readonly, nonatomic, getter=_providerNames) NSArray *providerNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *providerNames;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)providerNamesType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)providerNamesCount;
- (void)clearProviderNames;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithAttribution:(id)a0;
- (void)addProviderNames:(id)a0;
- (id)providerNamesAtIndex:(unsigned long long)a0;

@end

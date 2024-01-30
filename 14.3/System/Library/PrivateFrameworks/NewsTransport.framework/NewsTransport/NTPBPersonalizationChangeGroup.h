@class NSString, NSMutableArray;

@interface NTPBPersonalizationChangeGroup : PBCodable <NSCopying> {
    struct { unsigned char changeNumber : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *deltas;
@property (readonly, nonatomic) BOOL hasInstanceIdentifier;
@property (retain, nonatomic) NSString *instanceIdentifier;
@property (nonatomic) BOOL hasChangeNumber;
@property (nonatomic) unsigned long long changeNumber;

+ (Class)deltasType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)clearDeltas;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (unsigned long long)deltasCount;
- (id)description;
- (id)deltasAtIndex:(unsigned long long)a0;
- (void)addDeltas:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end

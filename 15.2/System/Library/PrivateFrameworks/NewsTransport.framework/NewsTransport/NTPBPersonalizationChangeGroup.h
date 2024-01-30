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

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)addDeltas:(id)a0;
- (void)clearDeltas;
- (unsigned long long)deltasCount;
- (id)deltasAtIndex:(unsigned long long)a0;

@end

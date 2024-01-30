@class ATXPBRequestForSuggestions, NSMutableArray;

@interface ATXPBRequestForIntentSuggestions : PBCodable <NSCopying> {
    struct { unsigned char limit : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) ATXPBRequestForSuggestions *base;
@property (retain, nonatomic) NSMutableArray *bundleIds;
@property (retain, nonatomic) NSMutableArray *intentClassNames;
@property (nonatomic) BOOL hasLimit;
@property (nonatomic) int limit;

+ (Class)bundleIdsType;
+ (Class)intentClassNamesType;

- (void)addBundleIds:(id)a0;
- (void)clearBundleIds;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)bundleIdsAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)bundleIdsCount;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addIntentClassNames:(id)a0;
- (void)clearIntentClassNames;
- (id)intentClassNamesAtIndex:(unsigned long long)a0;
- (unsigned long long)intentClassNamesCount;

@end

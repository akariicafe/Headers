@class NSString, NSMutableArray;

@interface HDCodableCategoryDomainDictionary : PBCodable <HDSyncCodable, NSCopying> {
    struct { unsigned char category : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasCategory;
@property (nonatomic) long long category;
@property (readonly, nonatomic) BOOL hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSMutableArray *keyValuePairs;

+ (Class)keyValuePairsType;

- (void)addKeyValuePairs:(id)a0;
- (void)clearKeyValuePairs;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)keyValuePairsCount;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)keyValuePairsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (id)initWithCategory:(long long)a0 domain:(id)a1;
- (long long)decodedCategory;
- (BOOL)_validateForInsertionWithError:(id *)a0;

@end

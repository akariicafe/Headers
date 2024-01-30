@class NSData, NSMutableArray;

@interface NPKProtoConflictingExpressPassIdentifiersForPassInformationRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasExpressPassInformation;
@property (retain, nonatomic) NSData *expressPassInformation;
@property (retain, nonatomic) NSMutableArray *referenceExpressPassesInformations;

+ (Class)referenceExpressPassesInformationType;

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
- (void)addReferenceExpressPassesInformation:(id)a0;
- (unsigned long long)referenceExpressPassesInformationsCount;
- (void)clearReferenceExpressPassesInformations;
- (id)referenceExpressPassesInformationAtIndex:(unsigned long long)a0;

@end

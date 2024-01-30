@class NSString, NSMutableArray, NSData;

@interface NACListeningModesMessage : PBCodable <NSCopying> {
    struct { unsigned char originIdentifier : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *availableListeningModes;
@property (readonly, nonatomic) BOOL hasCurrentListeningMode;
@property (retain, nonatomic) NSString *currentListeningMode;
@property (readonly, nonatomic) BOOL hasCategory;
@property (retain, nonatomic) NSString *category;
@property (nonatomic) BOOL hasOriginIdentifier;
@property (nonatomic) int originIdentifier;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) NSData *error;

+ (Class)availableListeningModeType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addAvailableListeningMode:(id)a0;
- (id)availableListeningModeAtIndex:(unsigned long long)a0;
- (unsigned long long)availableListeningModesCount;
- (void)clearAvailableListeningModes;

@end

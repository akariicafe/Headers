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

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addAvailableListeningMode:(id)a0;
- (unsigned long long)availableListeningModesCount;
- (void)clearAvailableListeningModes;
- (id)availableListeningModeAtIndex:(unsigned long long)a0;

@end

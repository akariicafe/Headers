@class NSString;

@interface ContextualActionPredictionsDataCommonFileFeatures : PBCodable <NSCopying> {
    struct { unsigned char size : 1; unsigned char timeSinceCreation : 1; unsigned char timeSinceLastAdded : 1; unsigned char timeSinceLastOpened : 1; unsigned char timeSinceModified : 1; unsigned char isMultipleFileSelection : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUTI;
@property (retain, nonatomic) NSString *uTI;
@property (nonatomic) BOOL hasTimeSinceCreation;
@property (nonatomic) int timeSinceCreation;
@property (nonatomic) BOOL hasTimeSinceLastOpened;
@property (nonatomic) int timeSinceLastOpened;
@property (nonatomic) BOOL hasTimeSinceLastAdded;
@property (nonatomic) int timeSinceLastAdded;
@property (nonatomic) BOOL hasTimeSinceModified;
@property (nonatomic) int timeSinceModified;
@property (nonatomic) BOOL hasIsMultipleFileSelection;
@property (nonatomic) BOOL isMultipleFileSelection;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) int size;

- (id)sizeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (int)StringAsSize:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)timeSinceCreationAsString:(int)a0;
- (int)StringAsTimeSinceCreation:(id)a0;
- (id)timeSinceLastOpenedAsString:(int)a0;
- (int)StringAsTimeSinceLastOpened:(id)a0;
- (id)timeSinceLastAddedAsString:(int)a0;
- (int)StringAsTimeSinceLastAdded:(id)a0;
- (id)timeSinceModifiedAsString:(int)a0;
- (int)StringAsTimeSinceModified:(id)a0;

@end
